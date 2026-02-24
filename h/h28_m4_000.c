section "h28_m4_000"{
    if (Parameter_GetCh1Param(4, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("H2804000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝!\nDid you come here to support us?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H2804000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah.\nWhen I look at you, I kinda feel...");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("H2804000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hm?");
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("H2804000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... That you seem okay.\nI'm relieved. Get out there!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah! Thanks!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
