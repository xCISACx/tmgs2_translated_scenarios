section "k02_g4_011"{
    Character_BlinkStart(13, 1, (#1), 1);
    Character_BlinkStart(13, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Character_ChFace(0, 0, 3);
    Voice_PlayVoice("K0213000_M01900", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Gee... I almost forgot. Here.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh, what is this?");
    Character_BlinkStart(13, 2, (#1));
    Voice_PlayVoice("K0213000_M02000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "It's your birthday today, right?\nHappy Birthday. It's a present.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh... You remembered. Thanks!");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("K0213000_M02100", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "I'm glad that you're happy.\nWhy don't you open it?");
    Character_Chara_GS2(13, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I'm glad...\nI received a present from\n｛Mizushima＊＊｝!)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("K02", "G4", 20);
    }
