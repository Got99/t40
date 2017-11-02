<?php
$z[0]=Array("field","",324,343);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",344,370);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",411,440);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",480,538);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1185,1220);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1644,2028);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("include","",4011,4046);
$z[6][4]=array();
$z[6][4]['filename']="foot.htm";

?>