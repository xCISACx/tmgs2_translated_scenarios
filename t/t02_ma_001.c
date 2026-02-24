section "t02_ma_001"{
    if (System_GlobalWork(18, 1) == 30){
        Background_Bg_GS2("BG_HO000_SP_2", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, I've received a letter.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's from Komori-kun. Uhh...)");
        Music_PlayBGM(0, "MN_C_91_001_D00", 127, 40);
        Message_Who(25);
        Message_MsgDisp("Komori", "\"I've been held back one year at\nschool\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"So don't worry about me anymore\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Thank you for everything.\nIt made me happy\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Goodbye. From Komori\".");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Komori-kun...)");
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        }
    else if (System_GlobalWork(18, 1) == 31){
        Message_Who(0);
        Message_MsgDisp("主人公", "... Huh?");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's a letter from Komori-kun!");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Congratulations on graduation\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"It seems like we won't be able to\nsee each other again, so I am\nwriting what I've always wanted to\nsay\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Thanks for saving me\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Thanks for coming to get me\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Thanks for watching over me\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Thanks for being by my side\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Thanks for saying that you like\nme\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"I thank you deeply for everything\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Sorry for all those things\".");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Goodbye. From Komori\".");
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun...");
        }
    }
