section "p53_m6_000"{
    int var0 = 0;
    if (Parameter_GetPl1Param(322) == 0){
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(There is only a bit of work to do\nbefore the display!\nMy heart is racing.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("？？？", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! You came.");
            Voice_PlayVoice("P5306000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, by chance.\nI wanted to see Senpai's work,\nanyway.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, it will be displayed after this.\nWould you like to go see?");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(There is only a bit of work to do\nbefore the display!\nMy heart is racing.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("？？？", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! You came.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("P5306000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Quite a few guests came.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nLet's go take a look,\n｛Amachi＊＊｝!");
            }
        Character_Chara_GS2(6, "NON");
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
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I want various people to see the\nwork everyone made.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("？？？", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! You came.");
            Voice_PlayVoice("P5306000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, by chance.\nI wanted to see Senpai's work,\nanyway.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, it will be displayed after this.\nWould you like to go see?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P5306000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So your piece of work was this\ngreat.\nHmm...\nAh, you're being called, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're right, let's get going!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I want various people to see the\nwork everyone made.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("？？？", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! You came.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("P5306000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Plenty of guests came.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Because I called people in earlier.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P5306000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Senpai?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. Were you handing out flyers?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P5306000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... There are so many men...\n*Sigh*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...?\nAh, the work will go out on display\nsoon!");
            }
        Character_Chara_GS2(6, "NON");
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
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, I'm amazed.\nA lot of guests are coming.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("？？？", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! You came.");
            Voice_PlayVoice("P5306000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This is a rare, great success.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's more than rare.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5306000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahaha! I'm sorry.... Eh? A mural?");
            Message_Who(0);
            Message_MsgDisp("主人公", "The debut is after this.\nDo you want to go have a look?");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, I'm amazed.\nA lot of guests are coming.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("？？？", "｛主人公｝.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! ...\nWhat's that face for?");
            Voice_PlayVoice("P5306000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nBecause according to my plan, I\nthought Senpai would have been\nstanding alone.");
            Voice_PlayVoice("P5306000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "And...\nI wanted to take you out with me to\nlook around the Culture Festival...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5306000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's nothing!\nHey, isn't the display soon?\nThe mural.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, you're right!\nLet's get ready to go!");
            }
        Character_Chara_GS2(6, "NON");
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
    System_Call_GS2("P54", "M6", 0);
    }
