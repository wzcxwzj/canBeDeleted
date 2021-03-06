#include "xmlconfig.h"
#include <QFile>
#include <QDomDocument>
#include <QDebug>
#include <stdio.h>
#include <QDir>

xmlConfig::xmlConfig(QObject *parent) : QObject(parent)
{
    writeXml();
    str[0]="SplitServerIp";
    str[1]="SplitServerPort";
    str[2]="Uid";
    str[3]="Sid";
    str[4]="ServerUrl";
    str[5]="User";
    str[6]="Pwd";
    str[7]="Rember";
    str[8]="OtherControl";
    str[9]="UpScreen";
    str[10]="Colunm";
    str[11]="Row";
    str[12]="MaxFrame";
    str[13]="MaxWinCount";
    str[14]="MaxFullFrameWinCount";
    str[15]="UpScreenIsConfig";
    str[16]="ScreenTransfer";
    str[17]="CameraSpeed";


//    int start, space, length, i, thisNum;
//        long total = 0;

//        printf("请输入等差数列的首项值：");
//        scanf("%d", &start);
//        printf("请输入等差数列的公差：");
//        scanf("%d", &space);
//        printf("请输入等差数列的项数：");
//        scanf("%d", &length);

//        for(i=0; i<length; i++){
//            thisNum = start + space * i;
//            if( length-i > 1 ){
//                printf("%d + ", thisNum);
//            }else{
//                printf("%d", thisNum);
//            }
//            total += thisNum;
//        }
//        printf(" = %ld\n", total);

}

void xmlConfig::writeXml()
{
    QString  XmlPath=QDir::currentPath();

    XmlPathFileName=tr("%1%2%3").arg(XmlPath).arg("/").arg("Config.xml");


    QFile file(XmlPathFileName);
    //QIODevice::Truncate表示清空原来的内容
    if(!file.open(QFile::WriteOnly | QFile::Truncate))
        return;

    //创建xml文档在内存中
    QDomDocument doc;

    QDomProcessingInstruction instruction;//添加处理命令
    instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");
    //创建注释
    doc.appendChild(instruction);

    //添加根节点
    QDomElement root=doc.createElement("WinnetConfig");
   // root.setAttribute("Version","2.1");
    doc.appendChild(root);

    QDomElement SplitServerIp=doc.createElement("SplitServerIp");
    QDomText nodeText1=doc.createTextNode("192.168.18.174");
    SplitServerIp.appendChild(nodeText1);

    QDomElement SplitServerPort=doc.createElement("SplitServerPort");
    QDomText nodeText2=doc.createTextNode("499299");
    SplitServerPort.appendChild(nodeText2);

    QDomElement Uid=doc.createElement("Uid");
    QDomText nodeText3=doc.createTextNode("1");
    Uid.appendChild(nodeText3);


    QDomElement Sid=doc.createElement("Sid");
    QDomText nodeText4=doc.createTextNode("1");
    Sid.appendChild(nodeText4);


    QDomElement ServerUrl=doc.createElement("ServerUrl");
    QDomText nodeText5=doc.createTextNode("ws://192.168.8.174:3000/");
    ServerUrl.appendChild(nodeText5);



    QDomElement User=doc.createElement("User");
    QDomText nodeText6=doc.createTextNode("admin1");
    User.appendChild(nodeText6);


    QDomElement Pwd=doc.createElement("Pwd");
    QDomText nodeText7=doc.createTextNode("123456");
    Pwd.appendChild(nodeText7);


    QDomElement Rember=doc.createElement("Rember");
    QDomText nodeText8=doc.createTextNode("false");
    Rember.appendChild(nodeText8);



    QDomElement OtherControl=doc.createElement("OtherControl");
    QDomText nodeText9=doc.createTextNode("false");
    OtherControl.appendChild(nodeText9);


    QDomElement UpScreen=doc.createElement("UpScreen");
    QDomText nodeText10=doc.createTextNode("true");
    UpScreen.appendChild(nodeText10);

    QDomElement Colunm=doc.createElement("Colunm");
    QDomText nodeText11=doc.createTextNode("2");
    Colunm.appendChild(nodeText11);


    QDomElement Row=doc.createElement("Row");
    QDomText nodeText12=doc.createTextNode("2");
    Row.appendChild(nodeText12);


    QDomElement MaxFrame=doc.createElement("MaxFrame");
    QDomText nodeText14=doc.createTextNode("30");
    MaxFrame.appendChild(nodeText14);


    QDomElement MaxWinCount=doc.createElement("MaxWinCount");
    QDomText nodeText15=doc.createTextNode("6");
    MaxWinCount.appendChild(nodeText15);


    QDomElement MaxFullFrameWinCount=doc.createElement("MaxFullFrameWinCount");
    QDomText nodeText16=doc.createTextNode("6");
    MaxFullFrameWinCount.appendChild(nodeText16);

    QDomElement UpScreenIsConfig=doc.createElement("UpScreenIsConfig");
    QDomText nodeText17=doc.createTextNode("true7");
    UpScreenIsConfig.appendChild(nodeText17);

    QDomElement ScreenTransfer=doc.createElement("ScreenTransfer");
    QDomText nodeText18=doc.createTextNode("false");
    ScreenTransfer.appendChild(nodeText18);

    QDomElement CameraSpeed=doc.createElement("CameraSpeed");


     root.appendChild(SplitServerIp);
     root.appendChild(SplitServerPort);
     root.appendChild(Uid);
     root.appendChild(Sid);
     root.appendChild(ServerUrl);
     root.appendChild(User);
     root.appendChild(Pwd);
     root.appendChild(Rember);
     root.appendChild(OtherControl);
     root.appendChild(UpScreen);

     root.appendChild(Colunm);
     root.appendChild(Row);
     root.appendChild(MaxFrame);
     root.appendChild(MaxWinCount);
     root.appendChild(MaxFullFrameWinCount);
     root.appendChild(UpScreenIsConfig);
     root.appendChild(ScreenTransfer);
     root.appendChild(CameraSpeed);

    //book=doc.createElement("SplitServeport");

//          root.appendChild(book);
//          root.appendChild(book);
//          root.appendChild();
//          root.appendChild(book);
//          root.appendChild(book);

//        book=doc.createElement("Uid");


//        book=doc.createElement("Sid");

//        book=doc.createElement("ServerUrl");


//        book=doc.createElement("User");

//        book=doc.createElement("Pwd");



    //方式一：创建属性  其中键值对的值可以是各种类型
//        QDomAttr id=doc.createAttribute("id");
//        id.setValue("1");
//        book.setAttributeNode(id);
  //  book.setAttribute("id",1);
  //  book.setAttribute("time","2013/6/13");
    //方式二：创建属性值必须是字符串
//        QDomAttr time=doc.createAttribute("time");
//        time.setValue("2013/6/13");
//        book.setAttributeNode(time);


  /*  QDomElement title=doc.createElement("title"); //创建子元素
    QDomText text;*/ //设置括号标签中间的值
//        text=doc.createTextNode("C++ primer");
//        book.appendChild(title);
//        title.appendChild(text);
//        QDomElement author=doc.createElement("author"); //创建子元素
//        text=doc.createTextNode("Stanley Lippman");
//        author.appendChild(text);
//        book.appendChild(author);
    //添加节点book做为根节点的子节点
//        root.appendChild(book);

    //添加第二个子节点及其子元素
//        book=doc.createElement("book");
//        book.setAttribute("id",2);
//        time=doc.createAttribute("time");
//        time.setValue("2007/5/25");
//        book.setAttributeNode(time);
//        title=doc.createElement("title");
//        text=doc.createTextNode("Thinking in Java");
//        book.appendChild(title);
//        title.appendChild(text);

//        author=doc.createElement("author");
//        text=doc.createTextNode("Bruce Eckel");
//        author.appendChild(text);
//        book.appendChild(author);
//     root.appendChild(book);

    //输出到文件
    QTextStream out_stream(&file);
    doc.save(out_stream,4); //缩进4格
    file.close();

}

void xmlConfig::changeXmlValue(KeyType ntype,const QVariant &value)
{
    //打开文件

        QFile file(XmlPathFileName);
        if(!file.open(QFile::ReadOnly))
        {
            qDebug()<<"open file failed";
            return;
        }

       //DOM关联文件操作
        QDomDocument doc;
        if(!doc.setContent(&file))
        {qDebug()<<"xxxxxxxxxxxxxxxxxxxxxxxx";
           file.close();
            return;
        }
        file.close();
       //输出根节点
         qDebug()<<"xxxxxxxxxxxxxxxxxxxxxxxx";
        QDomElement root=doc.documentElement();
        qDebug()<<root.nodeName();
        //获取第一个节点
         QDomNode node=root.previousSibling();

         //读
         while (!node.isNull())
         {

                 QDomElement element=node.toElement();
             //修改节点
             //遍历第一个节点的子节点
                 QDomNodeList list1=element.childNodes();
                 for(int i=0;i<list1.count();++i)
                  {
                      QDomNode n=list1.at(i);
                      QString tagName = n.toElement().tagName(); //获取节点的元素名称
                      QString pname=str[ntype];

                      if (tagName.compare(pname) == 0)         //节点标记查找,名称为"name"的节点
                      {
                            QDomNode oldNode = n.firstChild();
                             n.firstChild().setNodeValue(value.toString());
                            //新建一个新的newNode子节点
                            QDomNode newNode = n.firstChild();
                            //使用replaceChild替换node
                            n.replaceChild(newNode,oldNode);
                      }
                    qDebug()<<n.nodeName()<<":"<<n.toElement().text();
                  }
              //下一个兄弟节点
             node=node.nextSibling();
      }

         //写xml

        QFile file1(XmlPathFileName);
        file1.open(QIODevice::WriteOnly|QIODevice::Truncate|QIODevice::Text);
        QTextStream out(&file1);

        out.setCodec("UTF-8");
        doc.save(out,4,QDomNode::EncodingFromTextStream);
        file1.close();
}


QVariant xmlConfig::getXmlValue(KeyType ntype)
{

    //打开文件
        QFile file(XmlPathFileName);
        if(!file.open(QFile::ReadOnly))
        {
            return 0;
        }

       //DOM关联文件操作
        QDomDocument doc;
        if(!doc.setContent(&file))
        {
            file.close();
            return 0;
        }
        file.close();
       //输出根节点
        QDomElement root=doc.documentElement();
        qDebug()<<root.nodeName();

        //获取第一个节点
         QDomNode node=root.previousSibling();

         //node=root.firstChild();
         //读
         while (!node.isNull())
         {

                 QDomElement element=node.toElement();
                 //修改节点
                 //遍历第一个节点的子节点
                 QDomNodeList list1=element.childNodes();
                 for(int i=0;i<list1.count();++i)
                  {
                      QDomNode n=list1.at(i);
                      QString tagName = n.toElement().tagName(); //获取节点的元素名称
                      QString pname=str[ntype];
//                        qDebug()<< pname;
                      if (tagName.compare(pname) == 0)           //节点标记查找,名称为"name"的节点
                      {

                           qDebug()<<"key值已找到:"<<n.nodeName();
                           //int a=n.toElement().text();
  //                         qDebug()<<"ceshi:"<<n.toElement();

                             v.setValue(n.toElement().text());

                       }

                    qDebug()<<n.nodeName()<<":"<<n.toElement().text();

                  }
                  //下一个兄弟节点
                 node=node.nextSibling();

         }
          return v;
}
