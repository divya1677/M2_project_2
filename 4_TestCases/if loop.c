if(pwd[0]=='4'&&pwd[1]=='5'&&pwd[2]=='6'&&pwd[3]=='7')
	{
			
			lcdcmd(0x01);
			lcddis("  ACCESS GRANTED   ", 19);
			lcdcmd(0xc0);  //To pass to next line
			lcddis("   WELCOME HOME!   ", 20);
			i = 50;