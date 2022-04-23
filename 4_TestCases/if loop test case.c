if(pwd[0]=='4'&&pwd[1]=='5'&&pwd[2]=='6'&&pwd[3]=='7')
	{
			
			lcdcmd(0x01);
			lcddis("  ACCESS GRANTED   ", 19);
			lcdcmd(0xc0);  //To pass to next line
			lcddis("   WELCOME HOME!   ", 20);
			i = 50;
			while(i--)
			{
			m1p = 1; m1n = 0;  //Opens doors
			m2p = 1; m2n = 0;  //Opens doors	
			delay();
			}
			i = 60;
			while(i--)
			{
			m1p = 0; m1n = 0;  //Stops for a while
			m2p = 0; m2n = 0;  //Stops for a while
			delay();
			}
			lcdcmd(0x01);
			lcddis("  DOORS CLOSING..   ", 20);
			i = 50;
			while(i--)
			{
			m1p = 0; m1n = 1;  //Closes the door
			m2p = 0; m2n = 1;  //Closes the door
			delay();
			}	
			lcdcmd(0x01);
			i = 40;
			while(i--)
			{
			m1p = 0; m1n = 0;  //Stops 
			m2p = 0; m2n = 0;  
			delay();
			}
	}