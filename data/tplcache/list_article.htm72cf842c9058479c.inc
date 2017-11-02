<?php
$z[0]=Array("field","",327,346);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",347,373);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",414,443);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",483,541);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1198,1233);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1629,2013);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channel","\r\n        <li><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></li>\r\n        ",2072,2291);
$z[6][4]=array();
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li class='active'><a href='~typelink~'>~typename~</a></li>";
$z[7]=Array("list","\r\n            <li>\r\n              <div class=\"media media-x\">\r\n                <div class=\"caldata float-left\">\r\n                  <div class=\"content text-center\">\r\n                    <p class=\"day\">[field:pubdate function='strftime(\"%d\",@me)'/]</p>\r\n                    <p class=\"mon-year\">[field:pubdate function='strftime(\"%Y-%m\",@me)'/]</p>\r\n                  </div>\r\n                </div>\r\n                <div class=\"media-body\">\r\n                  <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n                  <p class=\"desc\">[field:description function='cn_substr(@me,250)'/]...</p>\r\n                </div>\r\n              </div>\r\n            </li>\r\n            ",2536,3278);
$z[7][4]=array();
$z[7][4]['pagesize']="8";
$z[8]=Array("pagelist","",3358,3424);
$z[8][4]=array();
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="3";
$z[9]=Array("include","",3539,3574);
$z[9][4]=array();
$z[9][4]['filename']="foot.htm";

?>