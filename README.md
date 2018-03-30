<html xmlns:v="urn:schemas-microsoft-com:vml"
<html xmlns:v="urn:schemas-microsoft-com:vml"
xmlns:o="urn:schemas-microsoft-com:office:office"
xmlns:w="urn:schemas-microsoft-com:office:word"
xmlns:m="http://schemas.microsoft.com/office/2004/12/omml"
xmlns:css="http://macVmlSchemaUri" xmlns="http://www.w3.org/TR/REC-html40">

<head>
<meta name=Title content="Huffman Coding">
<meta name=Keywords content="">
<meta http-equiv=Content-Type content="text/html; charset=utf-8">
<meta name=ProgId content=Word.Document>
<meta name=Generator content="Microsoft Word 2008">
<meta name=Originator content="Microsoft Word 2008">
<link rel=File-List href="project_files/filelist.xml">
<link rel=Edit-Time-Data href="project_files/editdata.mso">
<!--[if !mso]>
<style>
v\:* {behavior:url(#default#VML);}
o\:* {behavior:url(#default#VML);}
w\:* {behavior:url(#default#VML);}
.shape {behavior:url(#default#VML);}
</style>
<![endif]-->
<title>Huffman Coding</title>
<!--[if gte mso 9]><xml>
 <o:DocumentProperties>
  <o:Author>Vijay Raghunathan</o:Author>
  <o:Template>Normal</o:Template>
  <o:LastAuthor>Vijay Raghunathan</o:LastAuthor>
  <o:Revision>9</o:Revision>
  <o:TotalTime>236</o:TotalTime>
  <o:LastPrinted>2008-10-29T21:34:00Z</o:LastPrinted>
  <o:Created>2007-03-27T18:45:00Z</o:Created>
  <o:LastSaved>2009-10-21T19:13:00Z</o:LastSaved>
  <o:Pages>11</o:Pages>
  <o:Words>3516</o:Words>
  <o:Characters>20046</o:Characters>
  <o:Company>Engineering Computer Network</o:Company>
  <o:Lines>167</o:Lines>
  <o:Paragraphs>40</o:Paragraphs>
  <o:CharactersWithSpaces>24617</o:CharactersWithSpaces>
  <o:Version>12.0</o:Version>
 </o:DocumentProperties>
 <o:OfficeDocumentSettings>
  <o:AllowPNG/>
 </o:OfficeDocumentSettings>
</xml><![endif]--><!--[if gte mso 9]><xml>
 <w:WordDocument>
  <w:View>Print</w:View>
  <w:Zoom>BestFit</w:Zoom>
  <w:TrackMoves>false</w:TrackMoves>
  <w:TrackFormatting/>
  <w:ValidateAgainstSchemas/>
  <w:SaveIfXMLInvalid>false</w:SaveIfXMLInvalid>
  <w:IgnoreMixedContent>false</w:IgnoreMixedContent>
  <w:AlwaysShowPlaceholderText>false</w:AlwaysShowPlaceholderText>
  <w:Compatibility>
   <w:BreakWrappedTables/>
   <w:SplitPgBreakAndParaMark/>
   <w:DontGrowAutofit/>
   <w:UseFELayout/>
  </w:Compatibility>
 </w:WordDocument>
</xml><![endif]--><!--[if gte mso 9]><xml>
 <w:LatentStyles DefLockedState="false" LatentStyleCount="276">
 </w:LatentStyles>
</xml><![endif]-->
<style>
<!--p.MSONORMAL
	{mso-style-qformat:yes;
	mso-style-unhide:no;}
li.MSONORMAL
	{mso-style-qformat:yes;
	mso-style-unhide:no;}
div.MSONORMAL
	{mso-style-qformat:yes;
	mso-style-unhide:no;}
h1
	{mso-style-qformat:yes;
	mso-style-unhide:no;}
h2
	{mso-style-qformat:yes;
	mso-style-unhide:no;}
h3
	{mso-style-qformat:yes;
	mso-style-unhide:no;}
a:link
	{mso-style-unhide:no;}
span.MSOHYPERLINK
	{mso-style-unhide:no;}
a:visited
	{mso-style-unhide:no;}
span.MSOHYPERLINKFOLLOWED
	{mso-style-unhide:no;}
p
	{mso-style-unhide:no;}
pre
	{mso-style-unhide:no;}
p.MSOACETATE
	{mso-style-unhide:no;}
li.MSOACETATE
	{mso-style-unhide:no;}
div.MSOACETATE
	{mso-style-unhide:no;}
span.HEADING1CHAR
	{mso-bidi-font-size:14pt;
	mso-style-locked:yes;
	mso-style-unhide:no;
	mso-themecolor:accent1;
	mso-themeshade:191;}
span.HEADING2CHAR
	{mso-bidi-font-size:13pt;
	mso-style-locked:yes;
	mso-style-unhide:no;
	mso-themecolor:accent1;}
span.HEADING3CHAR
	{mso-bidi-font-size:12pt;
	mso-style-locked:yes;
	mso-style-unhide:no;
	mso-themecolor:accent1;}
span.HTMLPREFORMATTEDCHAR
	{mso-style-locked:yes;
	mso-style-unhide:no;}
span.BALLOONTEXTCHAR
	{mso-bidi-font-size:8pt;
	mso-style-locked:yes;
	mso-style-unhide:no;}
.MSOCHPDEFAULT
	{mso-default-props:yes;
	mso-bidi-font-size:10pt;}
table.MSONORMALTABLE
	{mso-style-priority:99;
	mso-style-qformat:yes;}

 /* Font Definitions */
@font-face
	{font-family:"Courier New";
	panose-1:2 7 3 9 2 2 5 2 4 4;
	mso-font-charset:0;
	mso-generic-font-family:auto;
	mso-font-pitch:variable;
	mso-font-signature:3 0 0 0 1 0;}
@font-face
	{font-family:Cambria;
	panose-1:2 4 5 3 5 4 6 3 2 4;
	mso-font-charset:0;
	mso-generic-font-family:auto;
	mso-font-pitch:variable;
	mso-font-signature:3 0 0 0 1 0;}
@font-face
	{font-family:Tahoma;
	panose-1:2 11 6 4 3 5 4 4 2 4;
	mso-font-charset:0;
	mso-generic-font-family:auto;
	mso-font-pitch:variable;
	mso-font-signature:3 0 0 0 1 0;}
@font-face
	{font-family:Consolas;
	panose-1:2 11 6 9 2 2 4 3 2 4;
	mso-font-charset:0;
	mso-generic-font-family:auto;
	mso-font-pitch:variable;
	mso-font-signature:3 0 0 0 1 0;}
 /* Style Definitions */
p.MsoNormal, li.MsoNormal, div.MsoNormal
	{mso-style-parent:"";
	margin:0in;
	margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	font-size:12.0pt;
	font-family:"Times New Roman";
	mso-fareast-font-family:"Times New Roman";
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;}
h1
	{mso-style-link:"Heading 1 Char";
	margin:0in;
	margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	mso-outline-level:1;
	font-size:24.0pt;
	font-family:"Times New Roman";
	mso-fareast-font-family:"Times New Roman";
	mso-fareast-theme-font:minor-fareast;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	font-weight:bold;}
h2
	{mso-style-link:"Heading 2 Char";
	margin:0in;
	margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	mso-outline-level:2;
	font-size:18.0pt;
	font-family:"Times New Roman";
	mso-fareast-font-family:"Times New Roman";
	mso-fareast-theme-font:minor-fareast;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	font-weight:bold;}
h3
	{mso-style-link:"Heading 3 Char";
	margin:0in;
	margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	mso-outline-level:3;
	font-size:13.5pt;
	font-family:"Times New Roman";
	mso-fareast-font-family:"Times New Roman";
	mso-fareast-theme-font:minor-fareast;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	font-weight:bold;}
a:link, span.MsoHyperlink
	{color:blue;
	text-decoration:underline;
	text-underline:single;}
a:visited, span.MsoHyperlinkFollowed
	{color:blue;
	text-decoration:underline;
	text-underline:single;}
p
	{margin:0in;
	margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	font-size:12.0pt;
	font-family:"Times New Roman";
	mso-fareast-font-family:"Times New Roman";
	mso-bidi-font-family:"Times New Roman";}
pre
	{mso-style-link:"HTML Preformatted Char";
	margin:0in;
	margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt;
	font-size:10.0pt;
	font-family:Courier;
	mso-ascii-font-family:"Courier New";
	mso-fareast-font-family:"Times New Roman";
	mso-hansi-font-family:"Courier New";
	mso-bidi-font-family:Courier;}
p.MsoAcetate, li.MsoAcetate, div.MsoAcetate
	{mso-style-link:"Balloon Text Char";
	margin:0in;
	margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	font-size:8.0pt;
	font-family:"Times New Roman";
	mso-ascii-font-family:Tahoma;
	mso-fareast-font-family:"Times New Roman";
	mso-hansi-font-family:Tahoma;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;}
span.Heading1Char
	{mso-style-name:"Heading 1 Char";
	mso-style-locked:yes;
	mso-style-link:"Heading 1";
	mso-ansi-font-size:14.0pt;
	font-family:Calibri;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:major-latin;
	mso-fareast-font-family:"Times New Roman";
	mso-fareast-theme-font:major-fareast;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:major-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:major-bidi;
	color:#365F91;
	font-weight:bold;}
span.Heading2Char
	{mso-style-name:"Heading 2 Char";
	mso-style-locked:yes;
	mso-style-link:"Heading 2";
	mso-ansi-font-size:13.0pt;
	font-family:Calibri;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:major-latin;
	mso-fareast-font-family:"Times New Roman";
	mso-fareast-theme-font:major-fareast;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:major-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:major-bidi;
	color:#4F81BD;
	font-weight:bold;}
span.Heading3Char
	{mso-style-name:"Heading 3 Char";
	mso-style-locked:yes;
	mso-style-link:"Heading 3";
	mso-ansi-font-size:12.0pt;
	font-family:Calibri;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:major-latin;
	mso-fareast-font-family:"Times New Roman";
	mso-fareast-theme-font:major-fareast;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:major-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:major-bidi;
	color:#4F81BD;
	font-weight:bold;}
span.HTMLPreformattedChar
	{mso-style-name:"HTML Preformatted Char";
	mso-style-locked:yes;
	mso-style-link:"HTML Preformatted";
	font-family:Consolas;
	mso-ascii-font-family:Consolas;
	mso-hansi-font-family:Consolas;}
span.BalloonTextChar
	{mso-style-name:"Balloon Text Char";
	mso-style-locked:yes;
	mso-style-link:"Balloon Text";
	mso-ansi-font-size:8.0pt;
	font-family:Tahoma;
	mso-ascii-font-family:Tahoma;
	mso-hansi-font-family:Tahoma;
	mso-bidi-font-family:Tahoma;}
@page Section1
	{size:8.5in 11.0in;
	margin:1.0in 1.0in 1.0in 1.0in;
	mso-header-margin:.5in;
	mso-footer-margin:.5in;
	mso-paper-source:0;}
div.Section1
	{page:Section1;}
 /* List Definitions */
@list l0
	{mso-list-id:276764437;
	mso-list-template-ids:-916145000;}
@list l0:level1
	{mso-level-number-format:bullet;
	mso-level-text:;
	mso-level-tab-stop:.5in;
	mso-level-number-position:left;
	text-indent:-.25in;
	mso-ansi-font-size:10.0pt;
	font-family:Symbol;}
@list l0:level2
	{mso-level-tab-stop:1.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l0:level3
	{mso-level-tab-stop:1.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l0:level4
	{mso-level-tab-stop:2.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l0:level5
	{mso-level-tab-stop:2.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l0:level6
	{mso-level-tab-stop:3.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l0:level7
	{mso-level-tab-stop:3.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l0:level8
	{mso-level-tab-stop:4.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l0:level9
	{mso-level-tab-stop:4.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1
	{mso-list-id:578755555;
	mso-list-template-ids:357319756;}
@list l1:level1
	{mso-level-tab-stop:.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1:level2
	{mso-level-tab-stop:1.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1:level3
	{mso-level-tab-stop:1.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1:level4
	{mso-level-tab-stop:2.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1:level5
	{mso-level-tab-stop:2.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1:level6
	{mso-level-tab-stop:3.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1:level7
	{mso-level-tab-stop:3.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1:level8
	{mso-level-tab-stop:4.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l1:level9
	{mso-level-tab-stop:4.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l2
	{mso-list-id:831406410;
	mso-list-template-ids:-916145000;}
@list l2:level1
	{mso-level-number-format:bullet;
	mso-level-text:;
	mso-level-tab-stop:.5in;
	mso-level-number-position:left;
	text-indent:-.25in;
	mso-ansi-font-size:10.0pt;
	font-family:Symbol;}
@list l2:level2
	{mso-level-tab-stop:1.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l2:level3
	{mso-level-tab-stop:1.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l2:level4
	{mso-level-tab-stop:2.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l2:level5
	{mso-level-tab-stop:2.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l2:level6
	{mso-level-tab-stop:3.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l2:level7
	{mso-level-tab-stop:3.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l2:level8
	{mso-level-tab-stop:4.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l2:level9
	{mso-level-tab-stop:4.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3
	{mso-list-id:1286277021;
	mso-list-template-ids:-1427099462;}
@list l3:level1
	{mso-level-tab-stop:.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3:level2
	{mso-level-tab-stop:1.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3:level3
	{mso-level-tab-stop:1.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3:level4
	{mso-level-tab-stop:2.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3:level5
	{mso-level-tab-stop:2.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3:level6
	{mso-level-tab-stop:3.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3:level7
	{mso-level-tab-stop:3.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3:level8
	{mso-level-tab-stop:4.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l3:level9
	{mso-level-tab-stop:4.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4
	{mso-list-id:1501966349;
	mso-list-template-ids:1369590492;}
@list l4:level1
	{mso-level-tab-stop:.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4:level2
	{mso-level-tab-stop:1.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4:level3
	{mso-level-tab-stop:1.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4:level4
	{mso-level-tab-stop:2.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4:level5
	{mso-level-tab-stop:2.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4:level6
	{mso-level-tab-stop:3.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4:level7
	{mso-level-tab-stop:3.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4:level8
	{mso-level-tab-stop:4.0in;
	mso-level-number-position:left;
	text-indent:-.25in;}
@list l4:level9
	{mso-level-tab-stop:4.5in;
	mso-level-number-position:left;
	text-indent:-.25in;}
ol
	{margin-bottom:0in;}
ul
	{margin-bottom:0in;}
-->
</style>
<!--[if gte mso 10]>
<style>
 /* Style Definitions */
table.MsoNormalTable
	{mso-style-name:"Table Normal";
	mso-tstyle-rowband-size:0;
	mso-tstyle-colband-size:0;
	mso-style-noshow:yes;
	mso-style-parent:"";
	mso-padding-alt:0in 5.4pt 0in 5.4pt;
	mso-para-margin:0in;
	mso-para-margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	font-size:12.0pt;
	font-family:"Times New Roman";
	mso-ascii-font-family:Cambria;
	mso-ascii-theme-font:minor-latin;
	mso-hansi-font-family:Cambria;
	mso-hansi-theme-font:minor-latin;}
</style>
<![endif]-->
<link rel=themeData
href="project_files/themedata.thmx">
<link rel=colorSchemeMapping
href="project_files/colorschememapping.xml">
<!--[if gte mso 9]><xml>
 <o:shapedefaults v:ext="edit" spidmax="6146"/>
</xml><![endif]--><!--[if gte mso 9]><xml>
 <o:shapelayout v:ext="edit">
  <o:idmap v:ext="edit" data="1"/>
 </o:shapelayout></xml><![endif]-->
<link rel=themeData
href="project_files/themedata.thmx">
<link rel=colorSchemeMapping
href="project_files/colorschememapping.xml">
</head>

<body bgcolor=white lang=EN-US link=blue vlink=blue style='tab-interval:.5in'>

<div class=Section1>

<h1 align=center style='text-align:center'><span style='mso-fareast-font-family:
"Times New Roman"'>Huffman Coding<o:p></o:p></span></h1>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><a
name=huffcode><span style='mso-bidi-font-family:"Times New Roman"'><o:p>&nbsp;</o:p></span></a></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:huffcode'><span style='mso-bidi-font-family:"Times New Roman"'><o:p>&nbsp;</o:p></span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:huffcode'><span style='mso-bidi-font-family:"Times New Roman"'>The description is mainly taken from Professor Vijay Raghunathan.   It
deals with file compression and file decompression (similar
to </span></span><span style='mso-bookmark:huffcode'><span style='font-family:
Courier;mso-bidi-font-family:"Times New Roman"'>zip</span></span><span
style='mso-bookmark:huffcode'><span style='mso-bidi-font-family:"Times New Roman"'>
and </span></span><span style='mso-bookmark:huffcode'><span style='font-family:
Courier;mso-bidi-font-family:"Times New Roman"'>unzip</span></span><span
style='mso-bookmark:huffcode'><span style='mso-bidi-font-family:"Times New Roman"'>).
You will base your utilities on the widely used algorithmic technique of
Huffman coding, which is used in JPEG compression as well as in MP3 audio 
compression.  In particular, you will utilize your knowledge about stacks
and trees to design a file decompression program.  (We have implemented 
a file compression program as described in this document to produce compressed files 
for your program to uncompress.)
<o:p></o:p></span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:huffcode'><span style='font-size:10.0pt;mso-bidi-font-size:
12.0pt;mso-bidi-font-family:"Times New Roman"'><o:p>&nbsp;</o:p></span></span></p>

<h2 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
huffcode'><span style='font-size:14.0pt;mso-bidi-font-size:18.0pt;mso-fareast-font-family:
"Times New Roman"'>ASCII coding (and extended ASCII coding)<o:p></o:p></span></span></h2>

<span style='mso-bookmark:huffcode'></span>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='font-size:10.0pt;
mso-bidi-font-size:12.0pt'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>Many programming languages use
ASCII (which stands for American Standard Code for Information Interchange)
coding to represent characters. In ASCII coding, every character is encoded
(represented) with the same number of bits (8-bits) per character. Since there
are 256 different values that can be represented with 8-bits, there are
potentially 256 different characters in the ASCII character set, as shown in
the ASCII character table (and extended ASCII character table) available at <span style='font-family:
Courier'><a href="http://www.asciitable.com/">http://www.asciitable.com/</a></span>.  <o:p></o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='font-size:10.0pt;
mso-bidi-font-size:12.0pt'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>Let us now look at a simple example of ASCII encoding of characters. 
Using ASCII encoding (8 bits per character) the 13-character
string &quot;<span style='font-family:Courier'>go go gophers</span>&quot;
requires 13 * 8 = 104 bits. The table below shows how the coding works.</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<div align=center>

<table class=MsoNormalTable border=1 cellpadding=0 style='mso-cellspacing:1.5pt;
 border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
 mso-yfti-tbllook:1184;mso-padding-alt:0in 5.4pt 0in 5.4pt;mso-border-insideh:
 .75pt solid windowtext;mso-border-insidev:.75pt solid windowtext'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><b
  style='mso-bidi-font-weight:normal'><span style='mso-bidi-font-family:"Times New Roman"'>Character<o:p></o:p></span></b></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><b
  style='mso-bidi-font-weight:normal'><span style='mso-bidi-font-family:"Times New Roman"'>ASCII
  code <o:p></o:p></span></b></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><b
  style='mso-bidi-font-weight:normal'><span style='mso-bidi-font-family:"Times New Roman"'>8-bit
  binary value<o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:8;mso-yfti-lastrow:yes'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>Space<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>32<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>00100000<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:5'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>e<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>101<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>01100101<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>g<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>103<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>01100111<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:4'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>h<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>104<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>01101000<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:2'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>o<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>111<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>01101111<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:3'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>p<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>112<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>01110000<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:6'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>r<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>114<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>01110010<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:7'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>s<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>115<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>01110011<o:p></o:p></span></p>
  </td>
 </tr>
</table>

</div>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>The given string would 
be written as the following stream of bits (the spaces would
not be written, just the 0's and 1's)</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='font-size:10.0pt'>01100111
01101111 00100000 01100111 01101111 00100000 01100111 01101111 
01110000 01101000 01100101 01110010 01110011 </span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>Note that we assume that for 
each byte, we have the most significant bit on the left and the 
least significant bit on the right for this programming assignment.  It does not really
matter except that the compression and decompression programs must follow
the same bit ordering.
</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<h2 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='font-size:
14.0pt;mso-bidi-font-size:18.0pt;mso-fareast-font-family:"Times New Roman"'>From
ASCII coding towards Huffman coding<o:p></o:p></span></h2>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>Next, let us see how we might
use fewer bits using a simpler coding scheme. Since there are only 8 different
characters in &quot;<span style='font-family:Courier'>go go gophers</span>&quot;,
it is possible to use only 3-bits to encode the 8 different characters. We
might, for example, use the coding shown in the table below (keep in mind that
other 3-bit encodings are also possible). </p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<div align=center>

<table class=MsoNormalTable border=1 cellpadding=0 style='mso-cellspacing:1.5pt;
 border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
 mso-yfti-tbllook:1184;mso-padding-alt:0in 5.4pt 0in 5.4pt;mso-border-insideh:
 .75pt solid windowtext;mso-border-insidev:.75pt solid windowtext'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><b
  style='mso-bidi-font-weight:normal'><span style='mso-bidi-font-family:"Times New Roman"'>Character<o:p></o:p></span></b></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><b
  style='mso-bidi-font-weight:normal'><span style='mso-bidi-font-family:"Times New Roman"'>Code
  Value <o:p></o:p></span></b></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><b
  style='mso-bidi-font-weight:normal'><span style='mso-bidi-font-family:"Times New Roman"'>3-bit
  binary value<o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>g<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>0<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>000<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:2'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>o<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>1<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>001<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:3'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>p<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>2<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>010<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:4'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>h<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>3<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>011<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:5'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>e<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>4<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>100<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:6'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>r<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>5<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>101<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:7'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>s<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>6<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>110<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:8;mso-yfti-lastrow:yes'>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>Space<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>7<o:p></o:p></span></p>
  </td>
  <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
  padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal align=center style='text-align:center'><span
  style='mso-bidi-font-family:"Times New Roman"'>111<o:p></o:p></span></p>
  </td>
 </tr>
</table>

</div>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>Now the string &quot;<span
style='font-family:Courier'>go go gophers</span>&quot; would be encoded
as: <span
style='font-size:10.0pt;font-family:Courier'>000 001 111 000 001 111 000 001
010 011 100 101 110. </span>As you can see, by using three bits per
character instead of eight bits per character that ASCII uses, the string
&quot;<span style='font-family:Courier'>go go gophers</span>&quot; uses a total
of 39 bits instead of 104 bits.</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>However, even in this improved
coding scheme, we used the same number of bits to represent each character,
irrespective of how often the character appears in our string. Even more bits
can be saved if we use fewer than three bits to encode characters like <span
style='font-family:Courier'>g</span>, <span style='font-family:Courier'>o</span>,
and <span style='font-family:Courier'>space</span> that occur frequently and
more than three bits to encode characters like <span style='font-family:Courier'>e, h, p, r,</span> and <span style='font-family:Courier'>s</span> that occur less
frequently in &quot;<span style='font-family:Courier'>go go gophers</span>&quot;.
<i style='mso-bidi-font-style:normal'>This is the basic idea behind Huffman
coding: to use fewer bits for characters that occur more frequently</i>. We'll
see how this is done using a tree data structure that stores the characters as
its leaf nodes, and whose root-to-leaf paths provide the bit sequence used to
encode the characters. </p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-fareast-font-family:
"Times New Roman"'><o:p>&nbsp;</o:p></span></h3>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-fareast-font-family:
"Times New Roman"'>Towards a Coding Tree<o:p></o:p></span></h3>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>Using a binary tree for
coding, all characters are stored at the leaves of a tree.   
A left-edge is numbered <span style='font-size:10.0pt;font-family:Courier'>0</span> and a right-edge is numbered 
<span style='font-size:10.0pt;font-family:Courier'>1</span>. 
The code for
any character/leaf node is obtained by following the root-to-leaf path 
and concatenating the 
<span style='font-size:10.0pt;font-family:Courier'>0</span>'s and 
<span style='font-size:10.0pt;font-family:Courier'>1</span>'s.  
The specific structure
of the tree determines the coding of any leaf node using the 0/1 edge
convention described. As
an example, the tree below on the right yields the coding shown on the left. </p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<div align=center>




<table class=MsoNormalTable border=0 cellpadding=0 style='mso-cellspacing:1.5pt;
 mso-yfti-tbllook:1184;mso-padding-alt:0in 5.4pt 0in 5.4pt'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes;mso-yfti-lastrow:yes;
  height:175.8pt'>
  <td width="40%" style='width:40.0%;padding:.75pt .75pt .75pt .75pt;
  height:175.8pt'>
  <table class=MsoNormalTable border=1 cellpadding=0 style='mso-cellspacing:
   1.5pt;border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
   mso-yfti-tbllook:1184;mso-padding-alt:0in 5.4pt 0in 5.4pt;mso-border-insideh:
   .75pt solid windowtext;mso-border-insidev:.75pt solid windowtext'>
   <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><a
    name=hufftree><b style='mso-bidi-font-weight:normal'><span
    style='mso-bidi-font-family:"Times New Roman"'>Character<o:p></o:p></span></b></a></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><b style='mso-bidi-font-weight:normal'><span
    style='mso-bidi-font-family:"Times New Roman"'>Binary code<o:p></o:p></span></b></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
   </tr>
   <tr style='mso-yfti-irow:8;mso-yfti-lastrow:yes'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>'g'<o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>00
    <o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
   </tr>
   <tr style='mso-yfti-irow:5'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>'o'<o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>01
    <o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
   </tr>
   <tr style='mso-yfti-irow:1'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>'s'<o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>100
    <o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
   </tr>
   <tr style='mso-yfti-irow:4'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>'&nbsp;&nbsp;'<o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>101
    <o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
   </tr>
   <tr style='mso-yfti-irow:2'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>'e'<o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>1100
    <o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
   </tr>
   <tr style='mso-yfti-irow:3'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>'h'<o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>1101
    <o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
   </tr>
   <tr style='mso-yfti-irow:6'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>'p'<o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>1110
    <o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
   </tr>
   <tr style='mso-yfti-irow:7'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>'r'<o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'>1111
    <o:p></o:p></span></span></p>
    </td>
    <span style='mso-bookmark:hufftree'></span>

   </tr>
  </table>
  <span style='mso-bookmark:hufftree'></span>
  <p class=MsoNormal><span style='mso-bookmark:hufftree'><span
  style='font-size:10.0pt;mso-fareast-font-family:"Times New Roman";mso-fareast-theme-font:
  minor-fareast'><o:p></o:p></span></span></p>
  </td>
  <span style='mso-bookmark:hufftree'></span>
  <td style='padding:.75pt .75pt .75pt .75pt;height:175.8pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
  style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman";
  mso-no-proof:yes'><!--[if gte vml 1]><v:shape id="_x0000_i1025" type="#_x0000_t75"
   alt="" style='width:316;height:188'>
   <v:imagedata src="project_files/ngopher8.jpg"/>
  </v:shape><![endif]--><![if !vml]><img border=0 width=319 height=190
  src="project_files/ngopher8.jpg" v:shapes="_x0000_i1025"><![endif]></span></span><span
  style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></p>
  </td>
  <span style='mso-bookmark:hufftree'></span>
 </tr>
</table>

</div>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><a name=gogoencode><o:p>&nbsp;</o:p></a></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='mso-bookmark:gogoencode'>Using this coding, &quot;</span></span><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:gogoencode'><span
style='font-family:Courier'>go go gophers</span>&quot; is encoded (again, 
spaces would not appear in the bit-stream) as: </span></span><span style='mso-bookmark:
gogoencode'></span><span style='mso-bookmark:hufftree'><span style='font-family:
Courier'>00 01 101 00 01 101 00 01 1110 1101 1100 1111 100</span>.  This is a
total of 37 bits, two bits fewer than the improved encoding in which each
of the 8 characters has a 3-bit encoding! The bits are saved by coding
frequently occurring characters like '</span><span style='mso-bookmark:hufftree'><span
style='font-family:Courier'>g</span>' and '</span><span style='mso-bookmark:
hufftree'><span style='font-family:Courier'>o</span>' with fewer bits (here two
bits) than characters that occur less frequently like '</span><span
style='mso-bookmark:hufftree'><span style='font-family:Courier'>p</span>', '</span><span
style='mso-bookmark:hufftree'><span style='font-family:Courier'>h</span>', '</span><span
style='mso-bookmark:hufftree'><span style='font-family:Courier'>e</span>', and
'</span><span style='mso-bookmark:hufftree'><span style='font-family:Courier'>r</span>'.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>To decode a given stream that has been coded by the given tree, 
start at the root of the tree, and follow a
left-branch if the next bit in the stream is a 0, and a right branch if the
next bit in the stream is a 1. When you reach a leaf, write the character
stored at the leaf, and start again at the top of the tree. 
The bit stream </span><span style='mso-bookmark:hufftree'><span style='font-family:Courier'>10011101101110011111100</span> yields 
<em>right-left-left</em> to the letter '</span><span
style='mso-bookmark:hufftree'><span style='font-family:Courier'>s</span>',
followed (starting again at the root) with <em>right-right-right-left</em> to
the letter '</span><span style='mso-bookmark:hufftree'><span style='font-family:
Courier'>p</span>', followed by <em>right-right-left-right</em> to the letter '</span><span
style='mso-bookmark:hufftree'><span style='font-family:Courier'>h</span>'.
Continuing thus yields a decoded string “</span><span style='mso-bookmark:hufftree'><span
style='font-family:Courier'>sphere</span>”.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='mso-fareast-font-family:"Times New Roman"'>Prefix codes<o:p></o:p></span></span></h3>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>When all characters are stored in leaves, and every interior
(non-leaf) node has two children, the coding induced by the 0/1 convention
outlined above satisfies a very important property called the <em>prefix
property</em> which states that no bit-sequence encoding of a character is the
prefix of the bit-sequence encoding of any other character. This makes it
possible to decode a bitstream using the coding tree by following root-to-leaf
paths. The tree shown above for &quot;</span><span style='mso-bookmark:hufftree'><span
style='font-family:Courier'>go go gophers</span>&quot; satisfies this prefix
property and is an optimal tree. 
There are other trees that use 37 bits; for example you can simply swap any
sibling nodes and get a different encoding that uses the same number of bits. Next,
we look at an algorithm for constructing such an optimal tree. This algorithm
is called Huffman coding, and was invented by David A. Huffman in 1952 when he
was a Ph.D. student at MIT.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<h2 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:14.0pt;mso-bidi-font-size:18.0pt;mso-fareast-font-family:
"Times New Roman"'>Huffman Coding <o:p></o:p></span></span></h2>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>In the previous section we saw examples of how a stream of bits can
be generated from an encoding. We also saw how the tree can be used to decode a
stream of bits. We'll discuss how to construct the tree here using Huffman's
algorithm.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>We'll assume that associated with each character is a weight that
is equal to the number of times the character occurs in a file. For example, in
the string &quot;</span><span style='mso-bookmark:hufftree'><span
style='font-family:Courier'>go go gophers</span>&quot;, the characters '</span><span
style='mso-bookmark:hufftree'><span style='font-family:Courier'>g</span>' and '</span><span
style='mso-bookmark:hufftree'><span style='font-family:Courier'>o</span>' have
weight 3, the space has weight 2, and the other characters have weight 1. When
compressing a file we'll need to first read the file and calculate these
weights. Assume that all the character weights have been calculated. Huffman's
algorithm assumes that we're building a single tree from a group (or forest) of
trees. Initially, all the trees have a single node containing a character and
the character's weight. Iteratively, a new tree is formed by picking two trees 
and making a new tree whose child nodes are the roots of the two trees.  The
weight of the new tree is the sum of the weights of the two sub-trees. 
This decreases the number of trees by one in each iteration.  The process
iterates until there is only one tree left.
The algorithm is as follows:</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<ol style='margin-top:0in' start=1 type=1>
 <li class=MsoNormal style='margin-top:.1pt;margin-bottom:.1pt;mso-para-margin-top:
     .01gd;mso-para-margin-bottom:.01gd;text-align:justify;text-justify:inter-ideograph;
     mso-list:l3 level1 lfo1;tab-stops:list .5in'><span style='mso-bookmark:
     hufftree'>Begin with a forest of trees. All trees have just one node, with
     the weight of the tree equal to the weight of the character in the node.
     Characters that occur most frequently have the highest weights. Characters
     that occur least frequently have the smallest weights. </span></li>
</ol>

<ol style='margin-top:0in' start=2 type=1>
 <li class=MsoNormal style='margin-top:.1pt;margin-bottom:.1pt;mso-para-margin-top:
     .01gd;mso-para-margin-bottom:.01gd;text-align:justify;text-justify:inter-ideograph;
     mso-list:l3 level1 lfo1;tab-stops:list .5in'><span style='mso-bookmark:
     hufftree'>Repeat this step until there is only one tree:</span></p>

<p class=MsoNormal style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;
margin-left:.5in;mso-para-margin-top:.01gd;mso-para-margin-right:0in;
mso-para-margin-bottom:.01gd;mso-para-margin-left:.5in;text-align:justify;
text-justify:inter-ideograph'><span style='mso-bookmark:hufftree'><span
style='mso-bidi-font-family:"Times New Roman"'>Choose two trees with the
smallest weights; call these trees T<sub>1</sub> and T<sub>2</sub>. Create a
new tree whose root has a weight equal to the sum of the weights T<sub>1</sub>
+ T<sub>2</sub> and whose left sub-tree is T<sub>1</sub> and whose right
sub-tree is T<sub>2</sub>. <o:p></o:p></span></span></p>
</ol>

<ol style='margin-top:0in' start=3 type=1>
 <li class=MsoNormal style='margin-top:.1pt;margin-bottom:.1pt;mso-para-margin-top:
     .01gd;mso-para-margin-bottom:.01gd;text-align:justify;text-justify:inter-ideograph;
     mso-list:l3 level1 lfo1;tab-stops:list .5in'><span style='mso-bookmark:
     hufftree'>The single tree left after the previous step is an optimal
     encoding tree. </span></li>
</ol>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><a name=forest>We shall use the string &quot;</a></span><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:forest'><span
style='font-family:Courier'>go go gophers</span>&quot; as an example. Initially
we have the forest shown below. The nodes are shown with a weight that
represents the number of times the node's character occurs in the given input
string/file.</span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='mso-bookmark:forest'><o:p>&nbsp;</o:p></span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:forest'><span
style='mso-bidi-font-family:"Times New Roman";mso-no-proof:yes'><!--[if gte vml 1]><v:shape
 id="_x0000_i1026" type="#_x0000_t75" alt="" style='width:359pt;height:49pt'>
 <v:imagedata src="project_files/ngopher1.jpg"/>
</v:shape><![endif]--><![if !vml]><img border=0 width=361 height=51
src="project_files/ngopher1.jpg" v:shapes="_x0000_i1026"><![endif]></span></span></span><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:forest'><span
style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></span></p>

<span style='mso-bookmark:forest'></span>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>We pick two minimal nodes. There are five nodes with the minimal
weight of 1.  In this implementation, we maintain a priority queue with
items arranged according to their weights.  When two items have the same 
weight, a leaf node (i.e., a node associated with an ASCII character) is 
always ordered first.  If both nodes are leaf nodes, they are ordered according
to their ASCII coding.  If both nodes are non-leaf nodes, they
are ordered according to the creation times of the nodes.  We always pick the
first two items in the priority queue, namely, nodes for characters
'</a></span><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:forest'><span
style='font-family:Courier'>e</span>' and 
'</a></span><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:forest'><span
style='font-family:Courier'>h</span>'.
We create a new tree whose root is weighted by the sum of the
weights chosen. The order of the nodes in the priority queue also determines
the left and right child nodes of the new root.  We now have a forest of seven trees as shown here.  Although the newly created node has the same
weight as </a></span><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:forest'><span
style='font-family:Courier'>Space</span>, it is ordered after 
</a></span><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:forest'><span
style='font-family:Courier'>Space</span> in the priority queue because
</a></span><span
style='mso-bookmark:hufftree'><span style='mso-bookmark:forest'><span
style='font-family:Courier'>Space</span> is an ASCII character.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style="mso-spacerun: yes">&nbsp;</span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman";
mso-no-proof:yes'><!--[if gte vml 1]><v:shape id="_x0000_i1027" type="#_x0000_t75"
 alt="" style='width:339pt;height:97pt'>
 <v:imagedata src="project_files/ngopher2.jpg"/>
</v:shape><![endif]--><![if !vml]><img border=0 width=341 height=99
src="project_files/ngopher2.jpg" v:shapes="_x0000_i1027"><![endif]></span></span><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>Choosing the first two (minimal) nodes in the priority queue yields 
another 
tree with weight 2 as
shown below.  There are now six trees in the forest of trees that will
eventually build an encoding tree.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style="mso-spacerun: yes">&nbsp;</span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman";
mso-no-proof:yes'><!--[if gte vml 1]><v:shape id="_x0000_i1028" type="#_x0000_t75"
 alt="" style='width:339pt;height:97pt'>
 <v:imagedata src="project_files/ngopher3.jpg"/>
</v:shape><![endif]--><![if !vml]><img border=0 width=341 height=99
src="project_files/ngopher3.jpg" v:shapes="_x0000_i1028"><![endif]></span></span><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>Again we must choose the first two (minimal) nodes in the priority queue.  The lowest
weight is the 'e'-node/tree with weight equal to 1. There are three trees
with weight 2; the one chosen corresponds to an ASCII character because
of the way we order the nodes in the priority queue.  
The new tree has a weight of 3, which will be placed last in the
priority queue according to our ordering strategy.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style="mso-spacerun: yes">&nbsp;</span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman";
mso-no-proof:yes'><!--[if gte vml 1]><v:shape id="_x0000_i1029" type="#_x0000_t75"
 alt="" style='width:310pt;height:89pt'>
 <v:imagedata src="project_files/ngopher4.jpg"/>
</v:shape><![endif]--><![if !vml]><img border=0 width=312 height=91
src="project_files/ngopher4.jpg" v:shapes="_x0000_i1029"><![endif]></span></span><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>Now there are two trees with weight equal to 2. These are joined
into a new tree whose weight is 4. There are four trees left, one whose
weight is 4 and three with a weight of 3. </span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style="mso-spacerun: yes">&nbsp;</span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman";
mso-no-proof:yes'><!--[if gte vml 1]><v:shape id="_x0000_i1030" type="#_x0000_t75"
 alt="" style='width:301pt;height:131pt'>
 <v:imagedata src="project_files/ngopher5.jpg"/>
</v:shape><![endif]--><![if !vml]><img border=0 width=303 height=133
src="project_files/ngopher5.jpg" v:shapes="_x0000_i1030"><![endif]></span></span><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:9.0pt;mso-bidi-font-size:12.0pt'><o:p>&nbsp;</o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>The first two minimal (weight 3) trees in the priority queue are 
joined into a tree whose weight
is 6.  There are three trees left.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style="mso-spacerun: yes">&nbsp;</span></span><span
style='mso-bookmark:hufftree'><span style='font-size:9.0pt;mso-bidi-font-size:
12.0pt'><o:p></o:p></span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman";
mso-no-proof:yes'><!--[if gte vml 1]><v:shape id="_x0000_i1031" type="#_x0000_t75"
 alt="" style='width:314pt;height:133pt'>
 <v:imagedata src="project_files/ngopher6.jpg"/>
</v:shape><![endif]--><![if !vml]><img border=0 width=316 height=135
src="project_files/ngopher6.jpg" v:shapes="_x0000_i1031"><![endif]></span></span><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:9.0pt;mso-bidi-font-size:12.0pt'><o:p>&nbsp;</o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>The minimal trees have weights of 3 and 4; these are joined
into a tree with weight 7.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style="mso-spacerun: yes">&nbsp;</span></span><span
style='mso-bookmark:hufftree'><span style='font-size:9.0pt;mso-bidi-font-size:
12.0pt'><o:p></o:p></span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman";
mso-no-proof:yes'><!--[if gte vml 1]><v:shape id="_x0000_i1032" type="#_x0000_t75"
 alt="" style='width:275pt;height:171pt'>
 <v:imagedata src="project_files/ngopher7.jpg"/>
</v:shape><![endif]--><![if !vml]><img border=0 width=277 height=173
src="project_files/ngopher7.jpg" v:shapes="_x0000_i1032"><![endif]></span></span><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:9.0pt;mso-bidi-font-size:12.0pt'><o:p>&nbsp;</o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>Finally, the last two trees are joined into a final tree whose weight
is 13, the sum of the two weights 6 and 7. This tree is
the tree we used to illustrate Huffman coding above.  Note that you can easily
come up with an alternative optimal tree by using a different
ordering strategy to order trees of the same weights.
In that case, the bit patterns for each character are different, but 
the total number of bits used to
encode &quot;</span><span style='mso-bookmark:hufftree'><span style='font-family:
Courier'>go go gophers</span>&quot; is the same. </span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:9.0pt;mso-bidi-font-size:12.0pt'><o:p>&nbsp;</o:p></span></span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman";
mso-no-proof:yes'><!--[if gte vml 1]><v:shape id="_x0000_i1033" type="#_x0000_t75"
 alt="" style='width:274pt;height:197pt'>
 <v:imagedata src="project_files/ngopher8.jpg"/>
</v:shape><![endif]--><![if !vml]><img border=0 width=276 height=199
src="project_files/ngopher8.jpg" v:shapes="_x0000_i1033"><![endif]></span></span><span
style='mso-bookmark:hufftree'><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:9.0pt;mso-bidi-font-size:12.0pt'><o:p>&nbsp;</o:p></span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
text-align:justify;text-justify:inter-ideograph'>We now show another tree
to compress the string
&quot;<span style='font-family:Courier'>streets are stone stars are not</span>&quot; optimally.  To encode
&quot;<span style='font-family:Courier'>streets are</span>&quot; 
we would have the following
bits: <span style='font-family:Courier'>1110001111011000111101010011110</span>.  

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style="mso-spacerun: yes">&nbsp;</span></span></p>

<span style='mso-bookmark:hufftree'></span>

<div align=center>



<table class=MsoNormalTable border=0 cellpadding=0 width="96%"
 style='width:96.52%;mso-cellspacing:1.5pt;mso-yfti-tbllook:1184;mso-padding-alt:
 0in 5.4pt 0in 5.4pt'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes'>
  <td width="99%" colspan=2 style='width:99.34%;padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><strong><span
  style='mso-bidi-font-family:"Times New Roman"'>Another Huffman Tree/Table
  Example</span></strong><span style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1;mso-yfti-lastrow:yes'>
  <td width="29%" style='width:29.58%;padding:.75pt .75pt .75pt .75pt'>
  <table class=MsoNormalTable border=1 cellpadding=0 style='mso-cellspacing:
   1.5pt;border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
   mso-yfti-tbllook:1184;mso-padding-alt:0in 5.4pt 0in 5.4pt;mso-border-insideh:
   .75pt solid windowtext;mso-border-insidev:.75pt solid windowtext'>
   <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><b
    style='mso-bidi-font-weight:normal'><span style='mso-bidi-font-family:"Times New Roman"'>Character<o:p></o:p></span></b></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><b
    style='mso-bidi-font-weight:normal'><span style='mso-bidi-font-family:"Times New Roman"'>Binary
    value<o:p></o:p></span></b></p>
    </td>
   </tr>
   <tr style='mso-yfti-irow:8;mso-yfti-lastrow:yes'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>'t'<o:p></o:p></span></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>00 <o:p></o:p></span></p>
    </td>
   </tr>
   <tr style='mso-yfti-irow:1'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>'a'<o:p></o:p></span></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>010 <o:p></o:p></span></p>
    </td>
   </tr>
   <tr style='mso-yfti-irow:2'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>'r'<o:p></o:p></span></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>011 <o:p></o:p></span></p>
    </td>
   </tr>
   <tr style='mso-yfti-irow:3'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>'n'<o:p></o:p></span></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>1000 <o:p></o:p></span></p>
    </td>
   </tr>
   <tr style='mso-yfti-irow:4'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>'o'<o:p></o:p></span></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>1001 <o:p></o:p></span></p>
    </td>
   </tr>
   <tr style='mso-yfti-irow:5'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>'&nbsp;&nbsp;'<o:p></o:p></span></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>101 <o:p></o:p></span></p>
    </td>
   </tr>
   <tr style='mso-yfti-irow:6'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>'e'<o:p></o:p></span></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>110 <o:p></o:p></span></p>
    </td>
   </tr>
   <tr style='mso-yfti-irow:7'>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>'s'<o:p></o:p></span></p>
    </td>
    <td style='border:solid windowtext 1.0pt;mso-border-alt:solid windowtext .75pt;
    padding:.75pt .75pt .75pt .75pt'>
    <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
    style='mso-bidi-font-family:"Times New Roman"'>111 <o:p></o:p></span></p>
    </td>
   </tr>
  </table>
  <p class=MsoNormal><span style='font-size:10.0pt;mso-fareast-font-family:
  "Times New Roman";mso-fareast-theme-font:minor-fareast'><o:p></o:p></span></p>
  </td>
  <td width="69%" style='width:69.44%;padding:.75pt .75pt .75pt .75pt'>
  <p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph'><span
  style='mso-bidi-font-family:"Times New Roman";mso-no-proof:yes'><!--[if gte vml 1]><v:shape
   id="_x0000_i1034" type="#_x0000_t75" alt="" style='width:345pt;height:249pt'>
   <v:imagedata src="project_files/streetstar.jpg"/>
  </v:shape><![endif]--><![if !vml]><img border=0 width=347 height=251
  src="project_files/streetstar.jpg" v:shapes="_x0000_i1034"><![endif]></span><span
  style='mso-bidi-font-family:"Times New Roman"'><o:p></o:p></span></p>
  </td>
 </tr>
</table>

</div>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>It is important to note
that you cannot use the tree built for the string
&quot;<span style='font-family:Courier'>go go gophers</span>&quot; to 
decode the bitstreams obtained from the encoding of 
&quot;<span style='font-family:Courier'>streets are stone stars are not</span>&quot; as the encoding is performed using a different tree.</span>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<h2 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:14.0pt;mso-bidi-font-size:18.0pt;mso-fareast-font-family:
"Times New Roman"'>Implementing/Programming Huffman Coding<o:p></o:p></span></span></h2>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>In this section we'll see the basic programming steps in implementing
Huffman coding. There are two parts to an implementation: a compression program
and a decompression program. 
We'll assume these are separate programs, but they actually have many
common functions.  For this programming assignment, you will
deal mainly with decompression.  However, to do decompression, we have
to understand compression.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:14.0pt;mso-bidi-font-size:13.5pt;mso-fareast-font-family:
"Times New Roman"'>The Compression Program<o:p></o:p></span></span></h3>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>To compress a file (sequence of characters) you need a table of bit
encodings, i.e., a table giving a sequence of bits used to encode each character.
This table is constructed from a coding tree using root-to-leaf paths to
generate the bit sequence that encodes each character. </span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>A compressed file is obtained using the following top-level steps. 
These steps will
be developed further into sub-steps, and you'll eventually implement a program
based on these ideas and sub-steps. </span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph;text-indent:-.25in;mso-list:
l4 level1 lfo2;tab-stops:list .5in'><span style='mso-bookmark:hufftree'><![if !supportLists]><span
style='mso-list:Ignore'>1.<span style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;
</span></span><![endif]>Build a Huffman coding tree based on the number of 
occurrences of each ASCII character in the file.  Build a table of Huffman 
codes for all ASCII characters that appear in the file.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph;text-indent:-.25in;mso-list:
l4 level1 lfo2;tab-stops:list .5in'><span style='mso-bookmark:hufftree'><![if !supportLists]><span
style='mso-list:Ignore'>2.<span style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;
</span></span><![endif]>Read the file to be compressed (the plain file) and
process one character at a time. To process each character find the bit
sequence that encodes the character using the table built in the previous step
and write this bit sequence to the compressed file. </span></p>


<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style="mso-spacerun: yes">&nbsp;</span></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'>The main challenge here is that when you encode an ASCII character
read from the file, the code is typically shorter than 8 bits.  However,
most systems allow you to write to a file a byte or 8 bits at a time.  
It becomes
necessary for you to accumulate the codes for a few ASCII characters 
before you write an 8-bit character to the output file. </span></p> 

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
text-align:justify;text-justify:inter-ideograph'>To compress the string
&quot;<span style='font-family:Courier'>streets are stone stars are not</span>&quot; for example, we read from the string one character at a time. 
The code for '<span style='font-family:Courier'>s</span>' is
<span style='font-family:Courier'>111</span>, we cannot write to the file
yet.  We read the next character
'<span style='font-family:Courier'>t</span>', whose code is 
<span style='font-family:Courier'>00</span>.  Again, we cannot write to 
the output file because the total number of bits is only 5.
Now, we read the next character '<span style='font-family:Courier'>r</span>', 
whose code is <span style='font-family:Courier'>011</span>.  The compression
program can now print a character of bit pattern 
<span style='font-family:Courier'>11100011</span> to the output file.  
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
text-align:justify;text-justify:inter-ideograph'>
Again, a reminder that we use the bit ordering in a byte to be one 
where the most significant bit is on the left and the least significant bit
is on the right.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
text-align:justify;text-justify:inter-ideograph'>Continuing with the process, the program would have to read
'<span style='font-family:Courier'>eet</span>', whose combined code is 
'<span style='font-family:Courier'>11011000</span>', before printing
the 8-bit combined code to the output file.  When the program
reads the next three characters
'<span style='font-family:Courier'>s a</span>', the combined code is 
'<span style='font-family:Courier'>111101010</span>'.  As the combined code 
has one more than 8 bits, the program should print the first 8 bits to the
output file, and combine the remaining bit with the next characters.
You may also encounter codes that are longer than 8 bits.  You would have to 
split such codes into 8-bit bytes.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
text-align:justify;text-justify:inter-ideograph'>What happens when you reach
the end of the file, and you have not accummulated 8 bits for printing.
All you have to do is pad the accummulated bits with enough 
<span style='font-family:Courier'>0</span>'s and print it to the output file.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
text-align:justify;text-justify:inter-ideograph'>We will show you the header
information that a compression program stores at the
beginning of the compressed file so that the decompression program can 
correctly 
decode the compressed file.</span></p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
header'><span style='mso-fareast-font-family:"Times New Roman"'><o:p>&nbsp;</o:p></span></span></h3>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
header'><span style='mso-fareast-font-family:"Times New Roman"'>Header
Information<o:p></o:p></span></span></h3>

<span style='mso-bookmark:header'></span>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>The compression program must 
store some initial information in the compressed file that will be used by 
the decompression/unhuffing
program.  At the beginning of the compressed, there are
three long integers:</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph;text-indent:-.25in;mso-list:
l2 level1 lfo4;tab-stops:list .5in'><![if !supportLists]><span
style='font-size:10.0pt;mso-bidi-font-size:12.0pt;font-family:Symbol;
mso-fareast-font-family:Symbol;mso-bidi-font-family:Symbol'><span
style='mso-list:Ignore'>·<span style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span></span></span><![endif]>The total number of characters in the compressed
file, as a long integer.
</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph;text-indent:-.25in;mso-list:
l2 level1 lfo4;tab-stops:list .5in'><![if !supportLists]><span
style='font-size:10.0pt;mso-bidi-font-size:12.0pt;font-family:Symbol;
mso-fareast-font-family:Symbol;mso-bidi-font-family:Symbol'><span
style='mso-list:Ignore'>·<span style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span></span></span><![endif]>The total number of characters storing the
header information, i.e., the topology of the Huffman coding tree,
as a long integer.
</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph;text-indent:-.25in;mso-list:
l2 level1 lfo4;tab-stops:list .5in'><![if !supportLists]><span
style='font-size:10.0pt;mso-bidi-font-size:12.0pt;font-family:Symbol;
mso-fareast-font-family:Symbol;mso-bidi-font-family:Symbol'><span
style='mso-list:Ignore'>·<span style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span></span></span><![endif]>The total number of characters in the original 
uncompressed file, as
a long integer.
</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>Following the three long 
integers, we store the topology of the 
Huffman coding tree, and then followed by the encoding of the original text
using Huffman codes.  We have described the encoding of the original text
in the earlier sections.  Now, we focus on how the topology of the
Huffman coding tree is stored.  
</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><o:p>&nbsp;</o:p></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>To store the tree at the beginning of the file (after the three long integers), 
we use a post-order traversal, writing each
node visited.  When you encounter a leaf node, you write a
<span style='font-family:Courier'>1</span> followed by the ASCII
character of the leaf node.  When you encounter a non-leaf node, you
write a <span style='font-family:Courier'>0</span>.  To indicate the
end of the Huffman coding tree, we write another 
<span style='font-family:Courier'>0</span>.</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>Consider the 
string 
&quot;<span style='font-family:Courier'>go go gophers</span>&quot;,
the header information is 
&quot;<span style='font-family:Courier'>1g1o01s1 01e1h01p1r00000</span>&quot;, 
immediately followed by encoded text.  
The post-order traversal of the Huffman coding tree gives us 
&quot;<span style='font-family:Courier'>1g1o01s1 01e1h01p1r0000</span>&quot;.
Another &quot;<span style='font-family:Courier'>0</span>&quot; separates 
the topology from the encoded text.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
For the string 
&quot;<span style='font-family:Courier'>streets are stone stars are 
not</span>&quot;, the header information is
&quot;<span style='font-family:Courier'>1t1a1r001n1o01 01e1s0000</span>&quot;, followed
by the encoded text.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
In these two examples, we use characters 
<span style='font-family:Courier'>0</span> and 
<span style='font-family:Courier'>1</span> to 
distinguish between non-leaf and leaf nodes (and 
<span style='font-family:Courier'>0</span> to indicate the
end of a topology).  As there are eight leaf nodes in each of the two
examples, there are eight <span style='font-family:Courier'>1</span>'s, 
seven <span style='font-family:Courier'>0</span>'s for non-leaf nodes,
and another one <span style='font-family:Courier'>0</span> to indicate that
we have reached the end of a topology.  This approach used a total of
24 bytes.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
The representation of a Huffman coding tree can be made more economical if we use bits
<span style='font-family:Courier'>0</span> and 
<span style='font-family:Courier'>1</span> to
distinguish between non-leaf and leaf nodes, and also to indicate the
end of a topology.  
In these two examples, there will be a total of 10 bytes (8 bytes
for the leaf nodes and 2 bytes for all the 
<span style='font-family:Courier'>0</span>'s and 
<span style='font-family:Courier'>1</span>'s).
The challenge here is that both the compression and decompression programs
would have to handle bits instead of characters.  For example, in the bit-based
approach, the first 16 bits (or the first 2 bytes) of the header information 
for encoding the
string &quot;<span style='font-family:Courier'>streets are stone stars are 
not</span>&quot; are 
<span style='font-family:Courier'>10111010 01011000</span>
(note that the space in the bit stream is introduced for better clarity).
The ASCII coding for 
'<span style='font-family:Courier'>t</span>' straddles the two bytes,
7 bits in the first byte and 1 bit in the second byte.  The second most
significant bit in the second
byte is a <span style='font-family:Courier'>1</span>,
indicating that the next 8 bits is an ASCII character, of which the
the most significant 6 bits of the character
'<span style='font-family:Courier'>a</span>' is contained in the least 
significant 6 bits of the second byte.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style="mso-spacerun:
yes">&nbsp;</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
In the bit-based representation of the Huffman coding tree,
the last byte may not contain 8 bits.  In this case, we again pad it 
with <span style='font-family:Courier'>0</span> bits.  Consider the case
where the input file uses nine distinct ASCII characters.   The number
of bits required to represent the Huffman coding tree is
9&times;8 + 9&times;2 = 90 bits, which can be represented by 12 bytes.  
In other words, the last byte should contain only two useful bits.
The 12 bytes are followed by the encoded text.
</span></p>

</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:14.0pt;mso-bidi-font-size:13.5pt;mso-fareast-font-family:
"Times New Roman"'>The Decompression or Dehuffing Program<o:p></o:p></span></span></h3>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
Given a compressed file, which contains the header information, followed
by a bit stream corresponding to the encoding of the original file, the
decompression program should perform the following tasks:</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph;text-indent:-.25in;mso-list:
l4 level1 lfo2;tab-stops:list .5in'><span style='mso-bookmark:hufftree'><![if !supportLists]><span
style='mso-list:Ignore'>1.<span style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;
</span></span><![endif]>Build a Huffman coding tree based on the header
information.  You would probably need the second long integer stored at
the beginning of the compressed file to help with the construction.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:.5in;
text-align:justify;text-justify:inter-ideograph;text-indent:-.25in;mso-list:
l4 level1 lfo2;tab-stops:list .5in'><span style='mso-bookmark:hufftree'><![if !supportLists]><span
style='mso-list:Ignore'>2.<span style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;
</span></span><![endif]>Read bit-by-bit from the compressed file 
(starting at the location after the header information).  Use the read
bit to traverse the Huffman coding tree (0 for left and 1 for right),
starting from the root node.  When the program reaches a leaf node, print the 
corresponding ASCII character to the output file.  Starts from the
root node of the Huffman coding tree when the next bit is read.  
The program terminates when the number of characters decoded matches the
number of characters stored as the third long integer at the beginning of
the compressed file. </span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
To construct a Huffman coding tree from the header information, we make
use of a stack.  When a <span style='font-family:Courier'>1</span> (bit or
character depending on whether we are dealing with a bit-based or 
character-based representation) is read, we read the next byte and push
the corresponding ASCII character onto the stack. 
When a <span style='font-family:Courier'>0</span> (bit or
character) is read, if the stack contains only one element, we have 
constructed the entire Huffman coding tree.  Otherwise, there must be more
than one element in the stack.  We create a new node, and pop the top 
two elements off the stack.  We make the first element off the stack the 
right child of the new node, and the second element off the stack
the left child of the new node.  After that, we push the newly created
node onto the stack.</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
A challenge is in the reading of a bit from the compressed file.  Again,
reading from a file occurs at the byte-level.  In the decompression program,
you have to read an 8-bit ASCII character that straddle two bytes in
the compressed file when you want to construct a Huffman coding tree.  
You also have to read one bit at a time to determine whether you are 
dealing with a leaf node or a non-leaf node.  Of course, you also have to 
read one bit at a time when you want to decode the compressed file.
A strategy is to always read a byte from the compressed file.  You also 
maintain an index to indicate where you are in that byte.  For example, when
you read in a character, the index should be pointing to the most significant
bit (i.e., the 7th bit, assuming that the least significant bit is
the 0th bit).  After you have processed one bit, the index should be decremented
by 1.</span></p>

<p class=MsoNormal style='text-align:justify;text-justify:inter-ideograph;
tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='mso-bidi-font-family:"Times New Roman"'><o:p>&nbsp;</o:p></span></p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:14.0pt;mso-bidi-font-size:13.5pt;mso-fareast-font-family:
"Times New Roman"'>What the folders contain<o:p></o:p></span></span></h3>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
Some samples are given.  The folder "original" contains 5 uncompressed files (4 text and
1 binary),
in their original form.  The folder "char_based_header" contains a version
of the compressed files of the files in "original".  The Huffman coding tree is
stored in character-based format.  
The folder "bit_based_header" contains a version
of the compressed files of the files in "original".  The Huffman coding tree
is stored in bit-based format.  The folder "code" contains the Huffman code
of each character in the Huffman coding tree.  The characters are printed
in the order in which they appear in a post-order traversal of the Huffman coding
tree.  For example, the file gophers.code contains the following:</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
<span style='font-family:Courier'>
g:00<br>
o:01<br>
s:100<br>
&nbsp;:101<br>
e:1100<br>
h:1101<br>
p:1110<br>
r:1111<br>
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
In this file, each line should contain an ASCII character in the Huffman
tree, followed by a colon ':', followed by the Huffman code, followed by a newline '\n'.  
The order in which the ASCII character should be printed is based on a post-order
traversal of the Huffman coding tree constructed based on the header information.
</p>
 
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
The folder
"corrupted_char" contains different corrupted versions of lorum.hch
and the folder "corrupted_bit" contains different corrupted versions of
lorum.hbt.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:14.0pt;mso-bidi-font-size:13.5pt;mso-fareast-font-family:
"Times New Roman"'>What you should turn in<o:p></o:p></span></span></h3>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
You should turn in all the .c and .h files that you have created for this
assignment.   For example, I can imagine that you have a huffman_main.c file that contains the main function, a huffman.c file that contains all other important functions, and a huffman.h file that define the structures and declare the functions in huffman.c.  You should create a zip file called proj1.zip that contains the .c and .h files.</p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
<span style='font-family:Courier'>
&GT; zip proj1.zip *.c *.h </span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
You should submit proj1.zip to Blackboard.</p>


<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
If you want to use a makefile for your assignment, please include the makefile 
in the zip file.  If the zip file that you submit contains a makefile, we use 
that file to make your executable (assuming that typing "make" at the command 
line will create the executable called "proj1".). </p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
Without a makefile, we will use the following command to compile your submission:</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
<p>
<span style='font-family:Courier'>
gcc -g -std=c99 -Wall -Wshadow -Wvla -pedantic *.c -o proj1 </span></p>
<p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
The flags used are very similar to the flags used in ECE264, except that the
-Werror flag has been taken out.  If you continue to use the <a href="https://engineering.purdue.edu/ece264/17au/setup">gcc alias</a> in ECE264 for ECE368 and
your code can compile, we should be able to compile your code on ecegrid.
Just to be sure, you should type in "alias gcc" at the command line and check whether your gcc uses the correct set of flags.
</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
If your program does not compile, 
you do not get any credit for 
the assignment.
Code that contains memory problems (as reported by Valgrind) will be subject to a penalty of 40% of the total possible points.
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='mso-fareast-font-family:"Times New Roman";color:maroon'>What your program should do
<o:p></o:p></span></h3>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'>You will write a main function that takes in an option
of "-c" or "-b" as argv[1].  For the option "-c", the next argument (argv[2]) 
should be a compressed file whose Huffman coding tree is represented using 
characters.  There are two more arguments: argv[3] is an output file to store
the Huffman code of every character and argv[4] is an output file to store the uncompressed file.
</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
For example, if we
run "./proj1 -c char_based_header/gophers.hch gophers.code gophers", the output stored in gophers.code should
match what is being stored in "code/gophers.code".  Here, "gophers.hch" is the compressed
file for the string &quot;<span style='font-family:Courier'>go go gophers</span>&quot;.
The output stored in "gophers" should match what is being stored in 
"original/gophers". The returned value of the main function should 
be EXIT_SUCCESS if the program is able to build the Huffman tree and decode. Otherwise, the returned value should be EXIT_FAILURE.</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
For the "-c" option, correct output in argv[3] accounts for 20 points and 
correct output in argv[4] accounts for another 40 points.
Only non-corrupted compressed files will be used for the evaluation of your program for these 60 points.  Up to 10 bonus points will be awarded for a submission that can detect corrupted compressed files (with Huffman coding tree stored using character-based representation). When you detect a corrupted compressed file, the returned value of the main function should be EXIT_FAILURE because the uncompression cannot be completed.
</p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
For the "-b" option, the next argument (argv[2]) is a compressed file whose Huffman coding tree is represented using bits.  Only one more argument (argv[3]) follows, an output file to store the uncompressed file.
If we run "./proj1 -b bit_based_header/gophers.hbt gophers", the output stored in "gophers"
should match what is being stored in "original/gophers".  
The returned value of the main function should be 
EXIT_SUCCESS if the program is able to build the Huffman tree and decode.
Otherwise, the returned value should be EXIT_FAILURE.  
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
This part of the assignment accounts for 40 points.  
Only non-corrupted compressed files will be used for 
the evaluation of your program for these 40 points.
Up to 10 bonus points will be awarded for a 
submission that can detect corrupted compressed files (with Huffman coding tree stored using bit-based representation).  When you detect
a corrupted compressed file, the returned value of the main function should 
be EXIT_FAILURE because the uncompression cannot be completed.  
</span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<h3 style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:
0in;text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><span style='font-size:14.0pt;mso-bidi-font-size:13.5pt;mso-fareast-font-family:
"Times New Roman"'>How you should proceed<o:p></o:p></span></span></h3>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>

<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
You should first build a Huffman coding tree from a compressed file that has
the Huffman coding tree stored using character-based representation.  To check 
whether you have the correct Huffman coding tree, use the files in the folder 
"code".  Then, you should proceed to uncompress the file based on the Huffman 
coding tree.
</p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>

When you are working on the part that deals with the bit-based representation,
you should still use the files in the folder "code" to check the correctness 
of your Huffman tree construction.  After you have extensively tested the 
program, you may then remove the part that output the code.  At this point, 
you should already have the entire program as the uncompression part is already
written and tested.
</p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'><span style='mso-bookmark:
hufftree'><o:p>&nbsp;</o:p></span></p>
<p style='margin-top:.1pt;margin-right:0in;margin-bottom:.1pt;margin-left:0in;
text-align:justify;text-justify:inter-ideograph'>
You may find the command xxd useful because it allows you to look at the binary contents of a compressed file.  You may find that it is necessary to use unsigned char or int to store a character (because we are dealing with ASCII values 0 to 255).  You also have to recall how you could implement a stack using a linked
list (from ECE264) and how you could implement a binary tree (from ECE264).
Of course, there are other ways to implement a stack and a tree.
If you are still not sure what to do, it is time to visit the TA or professor for help.  However, I would suggest that you read this description again (and 
again) before you do that.
</p>

</div>

</body>
</html>
