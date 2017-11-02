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
$z[4]=Array("include","",1188,1223);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1623,2007);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channel","\r\n        <li><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></li>\r\n        ",2066,2285);
$z[6][4]=array();
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li class='active'><a href='~typelink~'>~typename~</a></li>";
$z[7]=Array("list","\r\n            <div class=\"xm3 xs4 xl6 margin-big-bottom text-center\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\">\r\n              <div class=\"media-img\">\r\n                <div class=\"zoomimgs\" style=\"background-image:url([field:litpic/])\"></div>\r\n              </div>\r\n              <h3>[field:title/]</h3>\r\n              </a></div>\r\n            ",2548,2949);
$z[7][4]=array();
$z[7][4]['pagesize']="12";
$z[7][4]['titlelen']="36";
$z[8]=Array("pagelist","",3042,3108);
$z[8][4]=array();
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="3";
$z[9]=Array("include","",3209,3244);
$z[9][4]=array();
$z[9][4]['filename']="foot.htm";

?>