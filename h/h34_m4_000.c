section "h34_m4_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(4, "M4_01F", 0);
    if (Parameter_GetCh1Param(4, 130) <= 3){
        Voice_PlayVoice("H3404000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nYou came here to support us!");
        Character_ChFace(0, 2, 0);
        Voice_PlayVoice("H3404000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I just happened to be here.\nI had stuff to do at the studio.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see. Will you watch?");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("H3404000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah. Since I'm here, get 1st place.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    else {
        Voice_PlayVoice("H3404000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nYou came here to support us!");
        Voice_PlayVoice("H3404000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I heard you were gonna be in it, so\nI kinda wanted to see.");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H3404000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Kinda, I only kinda wanted to see!");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm still glad. Thanks!");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H3404000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Uh...\nYou'll show me something good,\nright?\nI'm expecting you to win.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, leave it to me!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I feel determined now!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
