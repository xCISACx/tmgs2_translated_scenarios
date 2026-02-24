section "s07_m1_000"{
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(1, "M1_??F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0701000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's crowded... I knew it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, but it's New Year's.");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("S0701000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "If I were Prime Minister, I'd\ndefinitely make New Year's a\nflexible time.");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(1, "M1_??F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0701000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's crowded...\nOkay, let's keep moving!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Let's go, ｛Saeki＊＊｝!");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("S0701000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Aah...");
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(1, "M1_??F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0701000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's crowded...\nWe'll become the garbage left by the\ncrowd, after this...");
        Message_Who(0);
        Message_MsgDisp("主人公", "That's not a good thing to say on\nNew Year's...");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("S0701000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "As you can see, it can't be helped.\nShall we go? Give me your hand.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0701000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Don't stop after I finally decided\nto say it...\nNow, your hand!\nDo you want to get separated?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
