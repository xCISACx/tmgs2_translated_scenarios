section "b03_m3_230"{
    int var0 = 0;
    int var1 = 0;
    int var2;
    int var3;
    System_GlobalWork(0, 0, 0);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        var2 = 1;
        }
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        Message_Who(0);
        Message_MsgDisp("主人公", "(That reminds me, I think the races\nare on today.)");
        Message_MsgSel("Ask to go see the race.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0303230_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Eh? Ah, there are races on....\nRight, let us go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
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
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There are quite a lot of people.\nLet us go and take a look.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            var3 = 1;
            System_Call_GS2("B04", "M3", 237);
            break ;
            case 1:
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "We came here today to fully enjoy\nourselves.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, you're right.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else {
        Message_PauseSkinship();
        Voice_PlayVoice("B0303230_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "We came here today to fully enjoy\nourselves.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, you're right.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    if ((Date_ChkDateOpen(73) == 0) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303230_C02700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... So then, what should we do?");
        while (var1 == 0){
            Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
            switch (Message_TextSelect()){
                case 0:
                var1 = 1;
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0303230_C02800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Did I mishear you?\nThere is no way you said roller...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "--Coaster! Let's ride it!");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0303230_C02900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "What is with your thickheadedness?\nWill this be okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Let's just ride it.");
                Message_CloseMsg();
                Character_Chara_GS2(3, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 3);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M3", 231);
                break ;
                case 1:
                var1 = 1;
                Message_ResumeSkinship();
                Voice_PlayVoice("B0303230_C03000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, that is a good idea.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0303230_C03100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Taking a walk across the sky in a\ngondola...\nI am looking forward to it.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(3, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 3);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M3", 232);
                break ;
                case 2:
                Message_MsgSel("I want to ride the merry-go-round.", "Let's go to the haunted house.", "As expected...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C04400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... Are you going to ride it?\nThe merry?");
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Merry...? Y-Yeah.");
                    Message_SkinshipSet(0);
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C04500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "... Only children are riding it.\nWe will be out of place, won't we?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "No, I don't think so.");
                    Message_CloseMsg();
                    Character_Chara_GS2(3, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(45, 0, 3);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M3", 233);
                    break ;
                    case 1:
                    var1 = 1;
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0303230_C04600", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Right... Do not regret it, okay?");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                    Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C04700", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nThis attraction looks quite popular.\nIt is one where you look at scary\nthings, right?");
                    Message_CloseMsg();
                    Character_Chara_GS2(3, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(46, 0, 3);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M3", 234);
                    break ;
                    case 2:
                    break ;
                    }
                break ;
                }
            }
        }
    else if ((Date_ChkDateOpen(73) == 1) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        if ((Date_ChkDateOpen(74) == 0) && (Date_ChkDateOpen(75) == 0) && (Date_ChkDateOpen(76) == 0)){
            Voice_PlayVoice("B0303230_C02700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... So then, what should we do?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(3, 2, (#1), 2);
                    Character_ChFace(1, 3, 0);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C02800", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Did I mishear you?\nThere is no way you said roller...");
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "--Coaster! Let's ride it!");
                    Message_SkinshipSet(0);
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 11);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C02900", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "What is with your thickheadedness?\nWill this be okay?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "For the time being, let's just ride\nit.");
                    Message_CloseMsg();
                    Character_Chara_GS2(3, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 3);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M3", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0303230_C03000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Yes, that is a good idea.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C03100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Taking a walk across the sky in a\ngondola...\nI am looking forward to it.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(3, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 3);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M3", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's drive on the go-carts.", "Or...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 2, 4);
                        Character_BlinkStart(3, 2, (#1), 2);
                        Character_ChFace(1, 3, 0);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C03200", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "... Merry-go-round?\nI thought it stopped?");
                        Message_ResumeSkinship();
                        Message_SkinshipSet(1);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Really? Let's go see.");
                        Message_SkinshipSet(0);
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(0, 2, 2);
                        Character_ChFace(0, 3, 0);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C03300", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "... It is moving.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah!");
                        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 2);
                        Character_ChFace(1, 3, 0);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C03400", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "... Okay, let us ride it.");
                        Message_CloseMsg();
                        Character_Chara_GS2(3, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 3);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M3", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0303230_C03500", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Go-carts, you say!?\nWhat a nice idea. Let us ride it!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Character_ChFace(1, 0, 10);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C03600", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "It goes perfectly with my image\ntraining....\nNow then, let us race.");
                        Message_CloseMsg();
                        Character_Chara_GS2(3, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        if (Parameter_ChkSpEvent("B05", "M3", 0) == 1){
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B05", "M3", 0);
                            }
                        else {
                            Graphic_OpenAnim(47, 0, 3);
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B04", "M3", 235);
                            }
                        break ;
                        case 2:
                        Message_MsgSel("Let's go to the haunted house.", "As expected...");
                        switch (Message_TextSelect()){
                            case 0:
                            var1 = 1;
                            Message_ResumeSkinship();
                            Voice_PlayVoice("B0303230_C03700", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "Okay, I do not mind. Let us go.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                            Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0303230_C03800", #1, "");
                            Message_Who(3);
                            Message_MsgDisp("Hikami", "...\nJudging from the exterior, it looks\nlike a scene from a movie.\nIt is eerie yet interesting.");
                            Message_CloseMsg();
                            Character_Chara_GS2(3, "NON");
                            Environment_StopME(0, 40);
                            Music_StopBGM(0, 40);
                            Graphic_OpenAnim(46, 0, 3);
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B04", "M3", 234);
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
            Voice_PlayVoice("B0303230_C03900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So, what should we ride?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0303230_C04000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "The roller coaster, huh... Alright.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C04100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "...\nI might remain silent for a little\nwhile.\nBut do not worry about me.");
                    Message_CloseMsg();
                    Character_Chara_GS2(3, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 3);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M3", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0303230_C04200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Yes, the ferris wheel is a good\nride.\nLet us go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 10);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C04300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I wonder how far we will be able to\nsee?\nI am looking forward to it.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(3, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 3);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M3", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's go to the haunted house.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C04400", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "... Are you going to ride it?\nThe merry?");
                        Message_ResumeSkinship();
                        Message_SkinshipSet(1);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Merry...? Y-Yeah.");
                        Message_SkinshipSet(0);
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C04500", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "... Only children are riding it.\nWe will be out of place, won't we?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "No, I don't think so.");
                        Message_CloseMsg();
                        Character_Chara_GS2(3, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 3);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M3", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0303230_C04600", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Right... Do not regret it, okay?");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C04700", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "...\nThis attraction looks quite popular.\nIt is one where you look at scary\nthings, right?");
                        Message_CloseMsg();
                        Character_Chara_GS2(3, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(46, 0, 3);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M3", 234);
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
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... So then, where should we go?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(3, 2, (#1), 2);
                    Character_ChFace(1, 3, 0);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0303230_C01200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "......... Are we riding that?\nWell, alright.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 11);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C01300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Isn't it quite fast!?\nDo you really plan on riding it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah! Ah, it's our turn.");
                    Message_CloseMsg();
                    Character_Chara_GS2(3, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 3);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M3", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0303230_C01400", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Riding the ferris wheel seems nice.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0303230_C01500", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "I wonder how long it takes to reach\nthe top?\nI will time it.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(3, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 3);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M3", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's drive on the go-carts.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 2, 4);
                        Character_BlinkStart(3, 2, (#1), 2);
                        Character_ChFace(1, 3, 0);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C01600", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "... Did you say \"merry-go-round\"?");
                        Message_ResumeSkinship();
                        Message_SkinshipSet(1);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, merry-go-round.");
                        Message_SkinshipSet(0);
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 2);
                        Character_ChFace(1, 3, 0);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C01700", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "You are really going to ride it...\nI thought it was a joke.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "... Ah, it's our turn.");
                        Message_CloseMsg();
                        Character_Chara_GS2(3, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 3);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M3", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0303230_C01800", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "Go-carts... What a good idea.\nI agree.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0303230_C01900", #1, "");
                        Message_Who(3);
                        Message_MsgDisp("Hikami", "... We are here.\nI am looking forward to it, I am\nitching to race.");
                        Message_CloseMsg();
                        Character_Chara_GS2(3, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        if (Parameter_ChkSpEvent("B05", "M3", 0) == 1){
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B05", "M3", 0);
                            }
                        else {
                            Graphic_OpenAnim(47, 0, 3);
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B04", "M3", 235);
                            }
                        break ;
                        case 2:
                        break ;
                        }
                    break ;
                    }
                }
            }
        else if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C02000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Now then, where should we go?\nTell me where you want to go.");
            Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "I want to ride the merry-go-round.");
            switch (Message_TextSelect()){
                case 0:
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0303230_C02100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh? Did you say \"roller coaster\"?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, let's go!");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0303230_C02200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I hear screaming!\nWill this be alright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm, we won't know unless we ride\nit.");
                Message_CloseMsg();
                Character_Chara_GS2(3, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 3);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M3", 231);
                break ;
                case 1:
                Message_ResumeSkinship();
                Voice_PlayVoice("B0303230_C02300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, what a nice idea.\nLet us do that.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0303230_C02400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The weather is nice today so it\nseems like there will be a nice\nview.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(3, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 3);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M3", 232);
                break ;
                case 2:
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0303230_C02500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Are you really riding it?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
                Character_ChFace(1, 0, 9);
                Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0303230_C02600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... You really are riding it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Message_CloseMsg();
                Character_Chara_GS2(3, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(45, 0, 3);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M3", 233);
                break ;
                }
            }
        }
    else if (var3 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303230_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Now then, where should we go?");
        Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "I want to ride the merry-go-round.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303230_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nWhy do you want to ride that all of\na sudden?\nWell, fine.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "What is with that angle!?\nAre you really going to ride it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! Ah, it's our turn.");
            Message_CloseMsg();
            Character_Chara_GS2(3, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(43, 0, 3);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 231);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303230_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ferris wheel, huh...\nWhat a nice idea.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Watch your step. But don't panic.\nYou'll be fine if the person in\ncharge helps you.");
            SoundEffect_PlayStream(3, "SS_T_00_231_M00");
            Message_CloseMsg();
            Character_Chara_GS2(3, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(44, 0, 3);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 232);
            break ;
            case 2:
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Are you seriously saying that?");
            Message_PauseSkinship();
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I want to ride it.");
            Character_ChFace(0, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303230_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see... Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Are you really going to ride it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Ah, it's our turn.");
            Message_CloseMsg();
            Character_Chara_GS2(3, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(45, 0, 3);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 233);
            break ;
            }
        }
    if (Date_ChkDateOpen(72) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303230_C04800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There is a night parade on at this\ntime....\nShall we go watch?");
        Message_MsgSel("Yeah, I want to watch.", "Sorry, I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C04900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right.\nNow then, let us hurry and get a\ngood spot....\nLet us go.");
            Message_CloseMsg();
            Music_StopBGM(0, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 236);
            Date_NightDate(0, 1);
            break ;
            case 1:
            Message_PauseSkinship();
            Voice_PlayVoice("B0303230_C05000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nIt will surely be late if we watch\nit...\nNow then, let us go home.");
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
