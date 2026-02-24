section "s07_m6_000"{
    Character_ChFace(0, 0, 11);
    Character_BlinkStart(6, 2, (#1));
    Character_Chara_GS2(6, "M6_??F", 0);
    Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Wah, what an amazing crowd...");
        Voice_PlayVoice("S0706000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "It's a really amazing crowd...");
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("S0706000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "It can't be helped, let's hurry.\nLet's go relax.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Voice_PlayVoice("S0706000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Wow～!\nWhat an amazing crowd of people....\nShall we turn around?");
        Message_Who(0);
        Message_MsgDisp("主人公", "We came all this way to get here.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("S0706000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "When you say it like that...\nIt can't be helped, we came this\nfar.");
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S0706000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Follow me so you don't get lost,\nokay?");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Wah, what an amazing crowd of\npeople...\nW-Wah!");
        SoundEffect_PlayStream(2, "SS_DSE_219_000");
        Screen_StartShakePlane(0, 32, 32, 0, 16);
        System_Wait(92);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("S0706000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, Senpai! Are you okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, somehow...");
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0706000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Hey, Senpai.\nGrab ahold of the back of me...\nMay I take the hits for you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("S0706000_F00700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Umm...\nCan I protect you while you hold\nonto my arm?\nOnly if Senpai says so.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Amachi＊＊｝...\nThank you.)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
