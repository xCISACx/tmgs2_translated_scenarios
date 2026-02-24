section "p53_m1_000"{
    int var0 = 0;
    if (Parameter_GetPl1Param(322) == 0){
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(The crowd has flocked here, and\nsoon, my painting is going to be\ndisplayed...)");
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.\nYou came to visit.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5301000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, for the meantime.\nSince I didn't join any clubs, I'm\nfree during Culture Festivals.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5301000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hmmm...\nAn oil painting display, I see.\nDiligently doing the activity,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nIf you please, take your time to\nlook around.");
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(The crowd has flocked here, and\nsoon, my painting is going to be\ndisplayed...)");
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.\nYou came to visit.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P5301000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, yeah.\nI'm interested in your painting....\nOoh, an oil painting.");
            Voice_PlayVoice("P5301000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "My grandpa also used to be proud of\nhis paintings when he was young, so\nwe have lots of them at home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see...\nHey, soften your criticism, okay?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P5301000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "*Chuckles*... I'm not sure if I can.");
            }
        Character_Chara_GS2(1, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(34, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    else if (Parameter_GetPl1Param(322) == 1){
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I want various people to see the\nwork everyone made.)");
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝. You came.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("P5301000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I came to look around.\nHey, this year's a mermaid\nsculpture, am I right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nIf you please, take your time to\nlook around.");
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I want various people to see the\nwork everyone made.)");
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝. You came.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P5301000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, since you're enthusiastic\nabout it.\nSo, it's a must to come or I might\nmiss it.");
            Voice_PlayVoice("P5301000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, this year's a mermaid\nsculpture, am I right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nIf you please, take your time to\nlook around.");
            }
        Character_Chara_GS2(1, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(35, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    else {
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Woah, I'm shocked.\nA lot of people came.)");
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝. You came.");
            Voice_PlayVoice("P5301000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "The Art Club's display is also\nhaving its last look this year.\nJust making sure to keep a memory.");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("P5301000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ooh... So this year's a mural.\nSo huge...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nIf you please, take your time to\nlook around.");
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Woah, I'm shocked.\nA lot of people came.)");
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝. You came.");
            Voice_PlayVoice("P5301000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You were so enthusiastic.\nThe Art Club's display is also\nhaving its last look this year.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thank you.");
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P5301000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No, thank you...\nI feel like I'm participating in the\nCulture Festival whenever I come\nhere.");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P5301000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ooh... I see, this year's a mural.\nMust be huge-scale, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nIf you please, take your time to\nlook around.");
            }
        Character_Chara_GS2(1, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(36, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    System_Call_GS2("P54", "M1", 0);
    }
