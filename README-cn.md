__[README.md in English](https://github.com/irext/irext/blob/master/README.md)__

# IRext (V0.2.2)

#### 开源家用电器红外的编解码和免费码库方案

  IRext 提供数以万计的红外设备遥控编码, 并以独特的编、解码算法为任何嵌入式设备、移动设备以及服务器提供红外设备遥控功能。

### 子项目:
- [核心编码/解码算法](https://github.com/irext/irext-core)
- [红外码索引服务私有云版本](https://github.com/irext/private-server)
- [红外码管理控制台私有云版本](https://github.com/irext/private-console)
- [各种平台的解码示例](https://github.com/irext/irext-examples)
- [Java Web索引 API](https://github.com/irext/irext-web-api)
- [离线索引及二进制码库](https://github.com/irext/database)
- [WebCOM 插件](https://github.com/irext/irext-web-com)


### 官方站点: https://irext.net


### 功能亮点:
- 从简易的XML文件开始对红外遥控码进行二进制压缩编码。
- 使用通用的解码算法，将编码成的二进制文件解码成 38KHz 红外波形码。
- 提供基于公有云和私有云的码库索引及维护控制台。
- 直接通过控制台上传、压缩、存储并管理编码及索引。
- 极限的编码格式，LIRC或者其它万能红外厂商需要使用数 KB 甚至上 MB 空间进行存储的单个电器码库，IRext 只需要使用几百字节的空间就可以存储 (已申请专利)。
- 极其节省资源的解码算法，整个万能红外码解码算法最多只消耗 1.5 KB 物理 RAM (已申请专利)。
- 支持 14 类家用电器 (空调、电视机、机顶盒、网络盒子、IPTV、音响、投影仪、风扇、扫地机器人、空气净化器、灯、DVD、部分品牌机顶盒以及Dyson系列)。
- 支持数万种型号的家电。
- 支持不同平台 (51单片机、Linux、Windows、Java Web、Android、树莓派、Arduino等）。
- 提供不同平台解码程序样例。
- 支持在线解码以及在线板载解码。
- 提供离线编码索引和码库，并按月更新。

### [文档](https://irext.net/doc/)


### 作者: 

电子邮件：strawmanbobi@163.com

<img src="https://github.com/irext/irext/blob/master/wx_qr.png" align="left" height="160" width="160">
