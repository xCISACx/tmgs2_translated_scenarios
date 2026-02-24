section "p24_m5_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_bunka_jyu(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Please come in!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("P1405000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow... It's glittering...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha. I also decorated this place.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("P1405000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Eh... It's so pretty.\nThanks for bringing me here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thank gosh.\nIt seems like ｛Chris＊＊｝\nlikes it!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Please come in!");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P1405000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Wow.\nIt smells strongly of sauce...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah! That customer just then...\nSorry, I'll clean it up right now!");
        Voice_PlayVoice("P1405000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah.\nThere's also some garbage at your\nfeet.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He's right... What should I do～!?)");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P1405000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Relax, I'll help you clean up.");
        Voice_PlayVoice("P1405000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "See, your next customers are\nwaiting.\nGo show them around.");
        Message_Who(0);
        Message_MsgDisp("主人公", "O-Okay. Sorry...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I stuffed up...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
