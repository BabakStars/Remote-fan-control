const char index_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
  <head>
   <title>configPage</title>
     <meta charset="utf-8" />
     <meta name="viewport" content="width=device-width, initial-scale=1">
    </head>
  <body>
<h1 style="color:red;text-align:center;">Control Fan</h1>
    <table border="1" style="margin-left:40%;margin-top:5%;margin-right:20%;">
      <tr>
        <form action="SET" method="GET">
        <td style="text-align:center;"><select name="Set"><option value="off">off</option></select></td>
        <td style="text-align:center;"><input type="submit" value="Set to off" /></td>
          </form>
      </tr>
      
      <tr>
        <form action="SET" method="GET">
        <td style="text-align:center;"><select name="Set"><option value="I">I</option></select> </td>
        <td style="text-align:center;"><input type="submit" value="Set to 1" /></td>
          </form>
      </tr>
      
      <tr>
        <form action="SET" method="GET">
        <td style="text-align:center;"><select name="Set"><option value="II">II</option></select></td>
        <td style="text-align:center;"><input type="submit" value="Set to 2" /></td>
          </form>
      </tr>
      
      <tr>
        <form action="SET" method="GET">
        <td style="text-align:center;"><select name="Set"><option value="III">III</option></select></td>
        <td style="text-align:center;"><input type="submit" value="Set to 3" /></td>
          </form>
      </tr>
    </table>
  <br/>  
  <h4 style="text-align:center;">Designed by : Babak Stars</h4> 
</body>
</html>
)=====";
