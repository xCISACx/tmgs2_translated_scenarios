section "h34_m5_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    if (Parameter_GetCh1Param(5, 130) <= 3){
        Voice_PlayVoice("H3405000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou came to support us!");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H3405000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nI came here to see you run in your\ncute uniform.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Geez～.");
        Voice_PlayVoice("H3405000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do your best▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ also came to\ncheer me on, so I have to do my\nbest!)");
        }
    else {
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou came to support us!");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H3405000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nI heard that you were gonna be in\nit, so I had to come to watch.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, I'm so happy!");
        Voice_PlayVoice("H3405000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You can't be too enthusiastic.\nYou gotta watch out so you don't\ninjure yourself.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I'm determined now!\nI'll do my best～!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
