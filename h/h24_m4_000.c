section "h24_m4_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(4, "M4_01F", 0);
    if (Parameter_GetCh1Param(4, 130) <= 3){
        Voice_PlayVoice("H2404000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nDid you come to watch?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H2404000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah, it looks fun. Focus, okay?\nI'll be cheering you on!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I have to do my best!)");
        }
    else {
        Voice_PlayVoice("H2404000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nDid you come to support the Lacrosse\nClub?");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H2404000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Why would I?\nI came here to see you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H2404000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ah! Anyway!\nEven if it's a practice game, don't\nlose!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I will do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
