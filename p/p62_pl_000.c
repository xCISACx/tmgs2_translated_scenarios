section "p62_pl_000"{
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_130_000", 127, 40);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetPl1Param(13) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Culture Festival is today.\nThe Brass Band Club will play a\nmusical performance.\nThe musical selection is a classic.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I better hurry and prepare!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Being sick and a part of the Culture\nFestival will be hard...\nBut the Brass Band has a musical\npiece to perform...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though it's tough, I have to go\nto preparations...");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetPl1Param(13) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "Today the Brass Band Club will be\nperforming a musical piece for the\nCulture Festival.");
            Message_Who(0);
            Message_MsgDisp("主人公", "The piece of music for this year's\nmusical performance is game music!\nI'm excited.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nThat wasn't the time to say such\nthings!\nI have to get ready for preparations\nsoon!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Being sick and a part of the Culture\nFestival will be hard...\nBut the Brass Band has a musical\npiece to perform...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Nevertheless, this year's piece of\nmusic to be performed is game\nmusic...\nIt's tough, but I have to go to\npreparations...");
            }
        }
    else {
        if (Parameter_GetPl1Param(13) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Culture Festival is today.\nThe Brass Band Club will tune a\nmusical performance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "And this year's musical performance\nis, \"Second Season\"!\nI'm excited.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nThat wasn't the time to say such\nthings!\nI have to get ready for preparations\nsoon!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Being sick and a part of the Culture\nFestival will be hard...\nBut the Brass Band has a musical\npiece to perform...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Nevertheless, the musical\nperformance this year will be,\n\"Second Season\"...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though it's tough, I have to go\nto preparations...");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P62", "PL", 10);
    }
