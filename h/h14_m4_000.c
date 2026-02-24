section "h14_m4_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(4, "M4_01F", 0);
    if (Parameter_GetCh1Param(4, 130) <= 3){
        Voice_PlayVoice("H1404000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H1404000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I was bored, so I came here to cheer\nthem on.\nListen up, don't you guys lose!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I should do my best to\ncheer them on!)");
        }
    else {
        Voice_PlayVoice("H1404000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1404000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I came to cheer.\nI'll give you guys my energy, so you\nshould be more fired up!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1404000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'll be watching from there, then.\nDo your job properly!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I also have to do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
