section "h34_m3_000"{
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 3);
    Character_Chara_GS2(3, "M3_01F", 0);
    if (Parameter_GetCh1Param(3, 130) <= 3){
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nYou came to support us!");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3403000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yeah, I'm also here for observation\nas well.\nSo you're going to be participating.\nPlease show me a good result.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    else {
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nYou came to support us!");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("H3403000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yeah, well...\ny-you are participating, and it was\nmy turn to go around on observation\nfor the Student Council.");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3403000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I think that the competitor to look\nout for is...\nyou.\nI'll support you so that you will\nget a good result.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, I'm determined, now.\nI'll do my best with all my\nstrength!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
