section "h18_m3_000"{
    if (Parameter_GetCh1Param(3, 130) >= 4){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "H1803000_C00300");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝, how are you\nfeeling?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. You came.");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("H1803000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yeah, I wanted to support you...\nand the Baseball Club.\nBecause it's a highly anticipated\nmatch.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah... right.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("", 3, "H1803000_C00500");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝, there is no\nneed to feel pressured.\nIt should be fine if you do it how\nyou usually do it.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("H1803000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Both you and the players....\nI'll support you until I have no\nmore strength left.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, ｛Hikami＊＊｝.\nYeah, I'm surging with power now!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
