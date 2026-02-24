section "h28_m5_000"{
    if (Parameter_GetCh1Param(5, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, I'm nervous!...)");
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝!\nDid you come to support us?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("H2805000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.... What's up?\nYour face is stiff.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm sort of nervous...");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2805000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "............ I can see it～...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Voice_PlayVoice("H2805000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I can see your heaps amazing\nsmiling, and you enjoying this\nmatch.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝...");
        Character_BlinkStart(5, 0, (#1));
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2805000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Good luck. I'll be watching.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah! I'm going!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thanks to ｛Chris＊＊｝, I\ncan relax!\nAlright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
