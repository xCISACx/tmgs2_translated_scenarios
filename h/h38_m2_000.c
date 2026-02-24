section "h38_m2_000"{
    if (Parameter_GetCh1Param(2, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 4, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nDid you come here just to cheer for\nme?");
        Voice_PlayVoice("H3802000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... How are you feeling?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nThere are a lot of people, so I'm\nsomewhat nervous...");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H3802000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nIf that's what's making you nervous,\nthen you should only think about me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nThat would make me extremely\nnervous.");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3802000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Then concentrate on running.\nGood luck.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, thanks!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Right, ｛Shiba＊＊｝ came\nhere for me.\nI'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
