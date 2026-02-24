section "h28_m2_000"{
    if (Parameter_GetCh1Param(2, 130) >= 4){
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I'm nervous...)");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!\nDid you come here to support us?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H2802000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Yeah.\nYou should be reviewing what you've\ndone in this club, right?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(2, 2, (#1));
        Character_BlinkStart(2, 0, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2802000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You should be fine....\nGet fired up and go for it.\nI'll be here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay! I'm going!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Somehow, it seems like I'm not\nnervous anymore.\nAlright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
