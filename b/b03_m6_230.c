section "b03_m6_230"{
    int var0 = 0;
    int var1 = 0;
    int var2;
    int var3;
    System_GlobalWork(0, 0, 0);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        var2 = 1;
        }
    Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        Message_Who(0);
        Message_MsgDisp("主人公", "(By the way, is there a race today?)");
        Message_MsgSel("Invite him to watch the race.", "Don't invite.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306230_F04200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, sure. Let's do that.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 0, 11);
                Character_BlinkStart(6, 2, (#1), 2);
                if (Date_ChkDateOpen(74) == 1){
                    Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    }
                else if (Date_ChkDateOpen(75) == 1){
                    Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    }
                else if (Date_ChkDateOpen(76) == 1){
                    Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    }
                Message_PauseSkinship();
                Voice_PlayVoice("B0306230_F04300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, it's about to begin.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Voice_PlayVoice("B0306230_F04400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, sounds like fun! Let's do that.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                if (Date_ChkDateOpen(74) == 1){
                    Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    }
                else if (Date_ChkDateOpen(75) == 1){
                    Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    }
                else if (Date_ChkDateOpen(76) == 1){
                    Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    }
                Message_PauseSkinship();
                Voice_PlayVoice("B0306230_F04500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai! The race has begun!!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            var3 = 1;
            System_Call_GS2("B04", "M6", 237);
            break ;
            case 1:
            Message_PauseSkinship();
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306230_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Let's get inside, quick!");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0306230_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, hurry, hurry!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else {
        Message_PauseSkinship();
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306230_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Let's get inside, quick!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Voice_PlayVoice("B0306230_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, hurry, hurry!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    if ((Date_ChkDateOpen(73) == 0) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        while (var1 == 0){
            Message_MsgSel("I prefer the Roller Coaster. test\ntest", "Let's ride the Ferris Wheel.", "Or we could...");
            switch (Message_TextSelect()){
                case 0:
                var1 = 1;
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0306230_F03000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Sounds good, the Roller Coaster!\nLet's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 10);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0306020_F01100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Well then, let's ride it.");
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 3){
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0306230_F03100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "The Roller Coaster! Sounds good!");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0306020_F01300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Oh, it's here, it's here.\nSo, hop in!");
                    }
                Message_CloseMsg();
                Character_Chara_GS2(6, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 6);
                Environment_PlayME(0, "", 127, 0);
                Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M6", 231);
                break ;
                case 1:
                var1 = 1;
                Character_ChFace(1, 0, 10);
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Voice_PlayVoice("B0306230_F03200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Understood, let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 10);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0306030_F00000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Well then, let's get inside.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 3){
                    Voice_PlayVoice("B0306230_F03300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Okay. Well, let's go!");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 10);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0306030_F00100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "So, let's go!");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    }
                Message_CloseMsg();
                Character_Chara_GS2(6, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 6);
                Environment_PlayME(0, "", 127, 0);
                Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M6", 232);
                break ;
                case 2:
                Message_MsgSel("I want to ride the Merry-go-round.", "Let's go inside the Haunted House.", "Let's see...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Character_ChFace(1, 0, 3);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Voice_PlayVoice("B0306230_F05200", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "I don't mind. Well then, let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 3);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0406191_F01400", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "... So, let's go then.");
                        }
                    else if (Parameter_GetCh1Param(6, 130) >= 3){
                        Character_ChFace(1, 0, 10);
                        Character_BlinkStart(6, 3, (#1), 2);
                        Voice_PlayVoice("B0306230_F05300", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Seems like you really do like to\ntake it easy....\nSure, let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Character_BlinkStart(6, 3, (#1), 2);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0406191_F01500", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "... So, let's go.");
                        }
                    Message_CloseMsg();
                    Character_Chara_GS2(6, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(45, 0, 6);
                    Environment_PlayME(0, "", 127, 0);
                    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M6", 233);
                    break ;
                    case 1:
                    var1 = 1;
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Character_ChFace(1, 0, 9);
                        Voice_PlayVoice("B0306230_F03800", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Oh, the Haunted House, you say?\n*Sigh* I understand...");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 9);
                        Character_BlinkStart(6, 3, (#1), 2);
                        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306230_F03900", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "... *Gulps*!");
                        }
                    else if (Parameter_GetCh1Param(6, 130) >= 3){
                        Character_ChFace(1, 0, 11);
                        Voice_PlayVoice("B0306230_F04000", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Whaaat? Are you sure!?\nAre we really going to the Haunted\nHouse!?");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 2);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Character_ChFace(1, 3, 5);
                        Character_ChFace(1, 7, 0);
                        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306230_F04100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "... I-I see, the Haunted House...\nHey, hey, I'll pass on this...\nThere's nothing much in there,\nright?");
                        }
                    Message_CloseMsg();
                    Character_Chara_GS2(6, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(46, 0, 6);
                    Environment_PlayME(0, "", 127, 0);
                    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M6", 234);
                    break ;
                    case 2:
                    break ;
                    }
                break ;
                }
            }
        }
    else if ((Date_ChkDateOpen(73) == 1) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if ((Date_ChkDateOpen(74) == 0) && (Date_ChkDateOpen(75) == 0) && (Date_ChkDateOpen(76) == 0)){
            Message_PauseSkinship();
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306230_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Which one should we ride then?");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Voice_PlayVoice("B0306230_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hey, which one should we ride?");
                }
            while (var1 == 0){
                Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "Or we could...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Character_ChFace(1, 0, 10);
                        Voice_PlayVoice("B0306230_F03000", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Sounds great, the Roller Coaster!\nLet's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306020_F01100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well then, let's ride it then.");
                        }
                    else if (Parameter_GetCh1Param(6, 130) >= 3){
                        Character_ChFace(1, 2, 4);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Voice_PlayVoice("B0306230_F03100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "The Roller Coaster! Sounds good!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 4);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306020_F01300", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Oh, it's here, it's here!\nSo, hop in!");
                        }
                    Message_CloseMsg();
                    Character_Chara_GS2(6, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 6);
                    Environment_PlayME(0, "", 127, 0);
                    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M6", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Voice_PlayVoice("B0306230_F03200", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "I get it, let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306030_F00000", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well then, let's get inside.");
                        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                        }
                    else if (Parameter_GetCh1Param(6, 130) >= 3){
                        Voice_PlayVoice("B0306230_F03300", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Okay. Well then, let's go!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306030_F00100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well, let's go!");
                        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                        }
                    Message_CloseMsg();
                    Character_Chara_GS2(6, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 6);
                    Environment_PlayME(0, "", 127, 0);
                    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M6", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the Merry-go-round.", "Let's drive Go-carts.", "Or we could...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_ChFace(1, 2, 0);
                            Character_BlinkStart(6, 3, (#1), 2);
                            Character_ChFace(1, 3, 3);
                            Voice_PlayVoice("B0306230_F03400", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "I don't mind. Well then, let's go.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 2, 0);
                            Character_BlinkStart(6, 3, (#1), 2);
                            Character_ChFace(1, 3, 3);
                            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0406191_F01400", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "... Well, let's go.");
                            }
                        else if (Parameter_GetCh1Param(6, 130) >= 3){
                            Character_ChFace(1, 2, 2);
                            Character_ChFace(1, 3, 3);
                            Voice_PlayVoice("B0306230_F03500", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Isn't that too lax? Nothing.\nLet's go.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 2, 2);
                            Character_ChFace(1, 3, 3);
                            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0306230_F02300", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Seems like you really do like to\ntake it easy....\nSure, let's go.");
                            }
                        Message_CloseMsg();
                        Character_Chara_GS2(6, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 6);
                        Environment_PlayME(0, "", 127, 0);
                        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M6", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_ChFace(1, 2, 4);
                            Character_BlinkStart(6, 2, (#1), 2);
                            Character_ChFace(1, 3, 3);
                            Voice_PlayVoice("B0306230_F03600", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Oh, sounds like fun!\nLet's do it, let's do it!");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 3);
                            Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0306230_F01300", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "The race is about to begin.");
                            }
                        else if (Parameter_GetCh1Param(6, 130) >= 3){
                            Character_ChFace(1, 0, 10);
                            Voice_PlayVoice("B0306230_F03700", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Sure! I'll show you what I've got!");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 10);
                            Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0306230_F01500", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "The race has started Just now!");
                            }
                        Message_CloseMsg();
                        Character_Chara_GS2(6, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(47, 0, 6);
                        Environment_PlayME(0, "", 127, 0);
                        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M6", 235);
                        break ;
                        case 2:
                        Message_MsgSel("Let's get inside the Haunted House.", "Or we could...");
                        switch (Message_TextSelect()){
                            case 0:
                            var1 = 1;
                            if (Parameter_GetCh1Param(6, 130) <= 2){
                                Character_ChFace(1, 2, 2);
                                Character_ChFace(1, 3, 1);
                                Voice_PlayVoice("B0306230_F03800", #1, "");
                                Message_Who(6);
                                Message_MsgDisp("Amachi", "Oh, the Haunted House, you say?\n*Sigh* I understand...");
                                Message_CloseMsg();
                                Screen_WipeOut(2);
                                Character_ChFace(1, 2, 2);
                                Character_ChFace(1, 3, 1);
                                Character_BlinkStart(6, 3, (#1), 2);
                                Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                                Screen_WipeIn(2);
                                Message_PauseSkinship();
                                Voice_PlayVoice("B0306230_F03900", #1, "");
                                Message_Who(6);
                                Message_MsgDisp("Amachi", "... *Gulps*!");
                                }
                            else if (Parameter_GetCh1Param(6, 130) >= 3){
                                Character_ChFace(1, 0, 11);
                                Voice_PlayVoice("B0306230_F04000", #1, "");
                                Message_Who(6);
                                Message_MsgDisp("Amachi", "Whaaat? Are you sure!?\nAre we really going in there!?");
                                Message_CloseMsg();
                                Screen_WipeOut(2);
                                Character_ChFace(1, 0, 11);
                                Character_ChFace(1, 2, 2);
                                Character_BlinkStart(6, 2, (#1), 2);
                                Character_ChFace(1, 3, 5);
                                Character_ChFace(1, 7, 0);
                                Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                                Screen_WipeIn(2);
                                Message_PauseSkinship();
                                Voice_PlayVoice("B0306230_F04100", #1, "");
                                Message_Who(6);
                                Message_MsgDisp("Amachi", "... I-I see, the Haunted House...\nHey, hey, I'll pass on this...\nThere's nothing much in there,\nright?");
                                }
                            Message_CloseMsg();
                            Character_Chara_GS2(6, "NON");
                            Environment_StopME(0, 40);
                            Music_StopBGM(0, 40);
                            Graphic_OpenAnim(46, 0, 6);
                            Environment_PlayME(0, "", 127, 0);
                            Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B04", "M6", 234);
                            break ;
                            case 1:
                            break ;
                            }
                        break ;
                        }
                    break ;
                    }
                }
            }
        else if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
            Message_PauseSkinship();
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306230_F04600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So, which one should we ride?");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Voice_PlayVoice("B0306230_F04700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hey, hey, which one should we ride?");
                }
            while (var1 == 0){
                Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "Or we could...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Character_ChFace(1, 0, 10);
                        Voice_PlayVoice("B0306230_F04800", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "The Roller Coaster sounds good!\nLet's go!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306020_F01100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well then, let's ride it.");
                        }
                    else if (Parameter_GetCh1Param(6, 130) >= 3){
                        Character_ChFace(1, 2, 4);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Voice_PlayVoice("B0306230_F04900", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Yeah, yeah!\nOf course, a Roller Coaster.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 4);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306020_F01300", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Oh, it's here, it's here.\nSo, hop in!");
                        }
                    Message_CloseMsg();
                    Character_Chara_GS2(6, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 6);
                    Environment_PlayME(0, "", 127, 0);
                    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M6", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Character_ChFace(1, 3, 3);
                        Voice_PlayVoice("B0306230_F05000", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Understood, let's get going.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 3, 3);
                        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306030_F00000", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well then, let's get inside.");
                        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                        }
                    else if (Parameter_GetCh1Param(6, 130) >= 3){
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(6, 3, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Voice_PlayVoice("B0306230_F05100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Okay. Well, let's get going!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(6, 3, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0306030_F00100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well, let's go.");
                        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                        }
                    Message_CloseMsg();
                    Character_Chara_GS2(6, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 6);
                    Environment_PlayME(0, "", 127, 0);
                    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M6", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the Merry-go-round.", "Let's get inside the Haunted House.", "Or we could...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_ChFace(1, 0, 3);
                            Character_BlinkStart(6, 2, (#1), 2);
                            Voice_PlayVoice("B0306230_F05200", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "I don't mind. Well then, let's go.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 3);
                            Character_BlinkStart(6, 2, (#1), 2);
                            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0406191_F01400", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "... Well, let's get going.");
                            }
                        else if (Parameter_GetCh1Param(6, 130) >= 3){
                            Character_ChFace(1, 0, 10);
                            Character_BlinkStart(6, 3, (#1), 2);
                            Voice_PlayVoice("B0306230_F05300", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Seems like you do really like to\ntake it easy....\nSure, let's go.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 10);
                            Character_BlinkStart(6, 3, (#1), 2);
                            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0406191_F01500", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "... So, let's go.");
                            }
                        Message_CloseMsg();
                        Character_Chara_GS2(6, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 6);
                        Environment_PlayME(0, "", 127, 0);
                        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M6", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_ChFace(1, 0, 9);
                            Voice_PlayVoice("B0306230_F03800", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Oh, the Haunted House, you say?\n*Sigh* I understand...");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 9);
                            Character_BlinkStart(6, 3, (#1), 2);
                            Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0306230_F03900", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "... *Gulps*!");
                            }
                        else if (Parameter_GetCh1Param(6, 130) >= 3){
                            Character_ChFace(1, 0, 11);
                            Voice_PlayVoice("B0306230_F04000", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Huh? Really?\nAre we really going inside the\nHaunted House!?");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 2, 2);
                            Character_BlinkStart(6, 2, (#1), 2);
                            Character_ChFace(1, 3, 5);
                            Character_ChFace(1, 7, 0);
                            Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0306230_F04100", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "... I-I see, Haunted House.\nHey, hey, I'll pass on this...\nThere's nothing much in there,\nright?");
                            }
                        Message_CloseMsg();
                        Character_Chara_GS2(6, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(46, 0, 6);
                        Environment_PlayME(0, "", 127, 0);
                        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M6", 234);
                        break ;
                        case 2:
                        break ;
                        }
                    break ;
                    }
                }
            }
        }
    else if ((Date_ChkDateOpen(73) == 1) && (Date_ChkDateOpen(71) == 0) && (var3 == 0)){
        if ((Date_ChkDateOpen(74) == 0) && (Date_ChkDateOpen(75) == 0) && (Date_ChkDateOpen(76) == 0)){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306230_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm, which one should we ride?");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306230_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hey, hey, which one should we ride?");
                }
            while (var1 == 0){
                Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "Or we could...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Character_ChFace(1, 0, 10);
                        Voice_PlayVoice("B0306230_F00200", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "I see, the Roller Coaster.\nIt's what I've wished for!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306020_F01100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well then, let's ride it.");
                        }
                    else if (Parameter_GetCh1Param(6, 130) >= 3){
                        Character_BlinkStart(6, 0, (#1), 2);
                        Voice_PlayVoice("B0306230_F00300", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Yeah!\nOnce you've come to an Amusement\nPark, for sure, it's the Roller\nCoaster!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 3, 3);
                        Character_BlinkStart(6, 0, (#1), 2);
                        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306020_F01300", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Oh, here it comes, here it comes.\nSo, hop in!");
                        }
                    Message_CloseMsg();
                    Character_Chara_GS2(6, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 6);
                    Environment_PlayME(0, "", 127, 0);
                    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M6", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    if (Parameter_GetCh1Param(6, 130) <= 2){
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Voice_PlayVoice("B0306230_F00400", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Yeah, sure.\nThe Ferris Wheel's over there.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(6, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306030_F00000", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well then, let's get inside.");
                        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                        }
                    else if (Parameter_GetCh1Param(6, 130) >= 3){
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(6, 3, (#1), 2);
                        Voice_PlayVoice("B0306230_F00500", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Okay! Well then, let's go!");
                        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(6, 3, (#1), 2);
                        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0306030_F00100", #1, "");
                        Message_Who(6);
                        Message_MsgDisp("Amachi", "Well, let's go!");
                        }
                    Message_CloseMsg();
                    Character_Chara_GS2(6, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 6);
                    Environment_PlayME(0, "", 127, 0);
                    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M6", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the Merry-go-round.", "Let's drive Go-carts.", "Or we could...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_ChFace(1, 2, 2);
                            Character_ChFace(1, 3, 0);
                            Voice_PlayVoice("B0306230_F00600", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "I see, the Merry-go-round...\nSenpai, you sure have girly hobbies.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 2, 2);
                            Character_ChFace(1, 3, 0);
                            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0406191_F01400", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "... So, let's get going!");
                            }
                        else if (Parameter_GetCh1Param(6, 130) >= 3){
                            Character_ChFace(1, 0, 3);
                            Voice_PlayVoice("B0306230_F00700", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "I see, the Merry-go-round...\nWell, okay. Let's go.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 3);
                            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0406191_F01500", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "... Well, let's go.");
                            }
                        Message_CloseMsg();
                        Character_Chara_GS2(6, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 6);
                        Environment_PlayME(0, "", 127, 0);
                        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M6", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        if (Parameter_GetCh1Param(6, 130) <= 2){
                            Character_ChFace(1, 0, 10);
                            Voice_PlayVoice("B0306230_F01200", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Oh, sounds like fun! Let's go!");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 3);
                            Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0306230_F01300", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Looks like the race is about to\nstart.");
                            }
                        else if (Parameter_GetCh1Param(6, 130) >= 3){
                            Character_ChFace(1, 0, 10);
                            Voice_PlayVoice("B0306230_F01400", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Oh, sounds like fun! Let's do that!");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 2, 4);
                            Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0306230_F01500", #1, "");
                            Message_Who(6);
                            Message_MsgDisp("Amachi", "Looks like the race has just\nstarted!");
                            }
                        Message_CloseMsg();
                        Character_Chara_GS2(6, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(47, 0, 6);
                        Environment_PlayME(0, "", 127, 0);
                        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M6", 235);
                        break ;
                        case 2:
                        break ;
                        }
                    break ;
                    }
                }
            }
        else if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306230_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Which one should we ride?");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Voice_PlayVoice("B0306230_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hey, hey, which one should we ride?");
                }
            Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "I want to ride the Merry-go-round.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0306230_F01800", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "The Roller Coaster sounds good!\nLet's get going!");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0306020_F01100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Well then, let's ride it.");
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 3){
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(6, 3, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0306230_F01900", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Yeah, yeah!\nOf course, the Roller Coaster.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(6, 3, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0306020_F01300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Oh, it's here, it's here.\nSo, hop in!");
                    }
                Message_CloseMsg();
                Character_Chara_GS2(6, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 6);
                Environment_PlayME(0, "", 127, 0);
                Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M6", 231);
                break ;
                case 1:
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(6, 3, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0306230_F02000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Understood! Let's get going.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(6, 3, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0306030_F00000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Well then, let's get inside.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 3){
                    Character_ChFace(1, 2, 5);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0306230_F02100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Okay. Well then, let's go!");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 5);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0306030_F00100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "So, let's go!");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    }
                Message_CloseMsg();
                Character_Chara_GS2(6, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 6);
                Environment_PlayME(0, "", 127, 0);
                Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M6", 232);
                break ;
                case 2:
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0306230_F02200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "I don't mind. Well then, let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0406191_F01400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Well, let's get going.");
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 3){
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 2);
                    Voice_PlayVoice("B0306230_F02300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Seems like you do really like to\ntake it easy....\nSure, let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 2);
                    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0406191_F01500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... So, let's go.");
                    }
                Message_CloseMsg();
                Character_Chara_GS2(6, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(45, 0, 6);
                Environment_PlayME(0, "", 127, 0);
                Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M6", 233);
                break ;
                }
            }
        }
    else if (var3 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306230_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm, which one should we ride?");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306230_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, hey, which one should we ride?");
            }
        Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "I want to ride the Merry-go-round.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0306230_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The Roller Coaster.\nIt's what I've wished for!");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 0, 10);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306020_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, let's ride it.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_BlinkStart(6, 0, (#1), 2);
                Voice_PlayVoice("B0306230_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nWhen you come to an Amusement Park,\nyou absolutely have to try the\nRoller Coaster!");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306020_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, it's here, it's here!\nWell, hop in!");
                }
            Message_CloseMsg();
            Character_Chara_GS2(6, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(43, 0, 6);
            Environment_PlayME(0, "", 127, 0);
            Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 231);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306230_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, sure.\nThe Ferris Wheel's over there.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306030_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, let's get inside.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0306230_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay! Well then, let's go.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306030_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, let's go!");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                }
            Message_CloseMsg();
            Character_Chara_GS2(6, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(44, 0, 6);
            Environment_PlayME(0, "", 127, 0);
            Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 232);
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0306230_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see, the Merry-go-round...\nSenpai, you sure have girly hobbies.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Well, let's get going.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(1, 0, 3);
                Voice_PlayVoice("B0306230_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see, the Merry-go-round...\nWell, okay. Let's go.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 0, 3);
                Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406191_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Well, let's go.");
                }
            Message_CloseMsg();
            Character_Chara_GS2(6, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(45, 0, 6);
            Environment_PlayME(0, "", 127, 0);
            Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 233);
            break ;
            }
        }
    if (Date_ChkDateOpen(72) == 1){
        Music_StopBGM(0, 40);
        System_Call_GS2("B03", "M6", 231);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
