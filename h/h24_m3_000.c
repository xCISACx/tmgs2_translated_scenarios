section "h24_m3_000"{
    if (Parameter_GetCh1Param(3, 130) <= 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nDid you come to support us?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2403000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yeah, I'm also here for observation.\nWe can learn of your club activities\nwith this game.\nSo you're playing. Don't lose.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    else {
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nYou came here to support us!");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2403000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yeah, but I also have to write a\nreport for the Student Council.\nAlso, I...");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("H2403000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I am observing the way you play....\nI will cheer for you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, I'm determined, now.\nI'll do my best with all my\nstrength!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
