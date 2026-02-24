section "b03_m4_230"{
    int var0 = 0;
    int var1 = 0;
    int var2;
    int var3;
    System_GlobalWork(0, 0, 0);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        var2 = 1;
        }
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Come to think of it, there's a race\ntoday.)");
        Message_MsgSel("Invite him to watch the race.", "Don't invite.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0304230_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Sounds good!\nOkay, let's go quick and try to get\ngood seats.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
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
            Voice_PlayVoice("B0304230_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "We're so close～!\nLooks pretty neat...\nOh, it's starting!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            var3 = 1;
            System_Call_GS2("B04", "M4", 237);
            break ;
            case 1:
            Message_PauseSkinship();
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0304230_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "We're here to enjoy!\nOkay, let's go!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else {
        Message_PauseSkinship();
        Voice_PlayVoice("B0304230_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "We're here to enjoy!\nOkay, let's go!!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    if ((Date_ChkDateOpen(73) == 0) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        while (var1 == 0){
            Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "Or we could...");
            switch (Message_TextSelect()){
                case 0:
                var1 = 1;
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0304230_D02900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah, let's go.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0304230_D03000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Though it's hot, the blistering heat\nwill be blown away by the speed!");
                Message_CloseMsg();
                Character_Chara_GS2(4, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 4);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M4", 231);
                break ;
                case 1:
                var1 = 1;
                Voice_PlayVoice("B0304230_D03100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Sounds good. Well then, let's go.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Character_ChFace(1, 3, 2);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0304230_D03200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It looks hot inside the gondola\nlift.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(4, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 4);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M4", 232);
                break ;
                case 2:
                Message_MsgSel("I want to ride the Merry-go-round.", "Let's go inside the Haunted House.", "Let's just...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 3, 5);
                    Voice_PlayVoice("B0304230_D04500", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Hmm... Well, okay. Yeah.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 3);
                    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Message_Who(0);
                    Message_MsgDisp("主人公", "You should ride that white horse,\n｛Hariya＊＊｝.");
                    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 4, 1);
                    Character_ChFace(1, 3, 4);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D04600", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "You...\nYou're looking for a fight, aren't\nyou?\nThat's embarassing...");
                    Message_CloseMsg();
                    Character_Chara_GS2(4, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(45, 0, 4);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M4", 233);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 3, 4);
                    Voice_PlayVoice("B0304230_D04700", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Why is this kind of child-tricking\nattraction so popular...?");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 9);
                    Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D04800", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Hey, I'm asking you not to suddenly\nscream close to my ear, okay?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Okay.");
                    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 9);
                    Character_ChFace(1, 3, 5);
                    Character_ChFace(1, 4, 1);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D04900", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Screaming that much is bad for the\nthroat.\nI'll show you how to scream.\nThe trick's in the abs.");
                    Message_CloseMsg();
                    Character_Chara_GS2(4, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(46, 0, 4);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M4", 234);
                    break ;
                    case 2:
                    break ;
                    }
                break ;
                }
            }
        }
    else if ((Date_ChkDateOpen(73) == 1) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        if ((Date_ChkDateOpen(74) == 0) && (Date_ChkDateOpen(75) == 0) && (Date_ChkDateOpen(76) == 0)){
            Voice_PlayVoice("B0304230_D02800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Now then, what do you want to do?");
            while (var1 == 0){
                Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "Or we could...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0304230_D02900", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Yeah, let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 10);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D03000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Although it's hot, the blistering\nheat will be blown away by the\nspeed!");
                    Message_CloseMsg();
                    Character_Chara_GS2(4, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 4);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M4", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0304230_D03100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Sure. Well then, let's try that.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                    Character_ChFace(1, 3, 2);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D03200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "It looks hot inside the gondola\nlift...");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(4, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 4);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M4", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the Merry-go-round.", "Let's drive Go-carts.", "Or we could...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 2, 2);
                        Character_BlinkStart(4, 3, (#1));
                        Character_ChFace(0, 3, 4);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0304230_D03300", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "*Sigh～*...\nLooks like the wind might be kinda\nwarm...");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 2);
                        Character_BlinkStart(4, 2, (#1));
                        Character_ChFace(1, 3, 0);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0304230_D03400", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "To sit is kinda slippery, too....\nI can't help but to give up and\nride...");
                        Message_CloseMsg();
                        Character_Chara_GS2(4, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 4);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M4", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 0, 10);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0304230_D03500", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "I've been waiting for you to say\nthat!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0304230_D03600", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Yeah, let's do that.\nThen we should go, too.");
                        Message_CloseMsg();
                        Character_Chara_GS2(4, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(47, 0, 4);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M4", 235);
                        break ;
                        case 2:
                        Message_MsgSel("Let's go inside the Haunted House.", "Let's just...");
                        switch (Message_TextSelect()){
                            case 0:
                            var1 = 1;
                            Character_ChFace(1, 2, 2);
                            Character_ChFace(1, 3, 4);
                            Message_ResumeSkinship();
                            Voice_PlayVoice("B0304230_D03700", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "... You're scared, aren't you?\nIf you want to back out, do it now.\nIt's okay. Really.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(0, 3, 0);
                            Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0304230_D03800", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "I...\nI told you, this is just for\ntricking the kids!");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "Well, will you go first?");
                            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                            Character_ChFace(1, 2, 2);
                            Character_ChFace(1, 3, 1);
                            Character_ChFace(1, 4, 1);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0304230_D03900", #1, "");
                            Message_Who(4);
                            Message_MsgDisp("Hariya", "To walk just to stand in line was a\ndecision made a long time ago.\nYou idiot!");
                            Message_CloseMsg();
                            Character_Chara_GS2(4, "NON");
                            Environment_StopME(0, 40);
                            Music_StopBGM(0, 40);
                            Graphic_OpenAnim(46, 0, 4);
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B04", "M4", 234);
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
            Voice_PlayVoice("B0304230_D04000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well then, which one should we go on\nfirst?");
            while (var1 == 0){
                Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "Or we could...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0304230_D04100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "It's here! Let's go, come on!");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Character_Chara_GS2(4, "M4_??F", 0, 1);
                    Character_ChFace(1, 0, 10);
                    Character_BlinkStart(4, 2, (#1), 2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D04200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "I want to ride the front seat...\nI hope we'll get lucky.");
                    Message_CloseMsg();
                    Character_Chara_GS2(4, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 4);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M4", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0304230_D04300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Yeah, sure.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D04400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Oh, it's here. Watch your step.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(4, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 4);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M4", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the Merry-go-round.", "Let's go inside the Haunted House.", "Let's just...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 2, 2);
                        Character_ChFace(1, 3, 5);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0304230_D04500", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Hmm... Well, okay. Yeah.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 3);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Message_Who(0);
                        Message_MsgDisp("主人公", "You should ride that white horse,\n｛Hariya＊＊｝.");
                        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 2);
                        Character_ChFace(1, 4, 1);
                        Character_ChFace(1, 3, 4);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0304230_D04600", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "You...\nYou're looking for a fight, aren't\nyou?\nThat's just embarrassing...");
                        Message_CloseMsg();
                        Character_Chara_GS2(4, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 4);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M4", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 2);
                        Character_ChFace(1, 3, 4);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0304230_D04700", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Why is this kind of child-tricking\nattraction popular...?");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 9);
                        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0304230_D04800", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Hey, I'm asking you not to suddenly\nscream close to my ear, okay?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah.");
                        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 2);
                        Character_ChFace(1, 3, 5);
                        Character_ChFace(1, 4, 1);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0304230_D04900", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Screaming that much is bad for the\nthroat.\nI'll show you how to scream.\nThe trick's in the abs.");
                        Message_CloseMsg();
                        Character_Chara_GS2(4, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(46, 0, 4);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M4", 234);
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
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304230_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Which one's better?");
            while (var1 == 0){
                Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "Or we could...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0304230_D01100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Yeah!\nSince we've decided, let's go dash\nto the stand!");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 10);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D01200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Listen, the picture is to be taken\naround there!\nDon't forget to pose!");
                    Message_CloseMsg();
                    Character_Chara_GS2(4, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 4);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M4", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0304230_D01300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Well then, let's try that.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 4);
                    Character_ChFace(1, 3, 5);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0304230_D01400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "The upper gondola lift is swaying\nbecause of the wind!\nThat's some thrill～!");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(4, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 4);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M4", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the Merry-go-round.", "Let's drive Go-carts.", "Anyway...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 2, 2);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0304230_D01500", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Hmm... Well, anyway, let's ride...");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 4);
                        Character_BlinkStart(4, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0304230_D01600", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Do you know that it's not\nmerrygoround but merry-go-round?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Yeah, I know.");
                        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                        Character_ChFace(1, 0, 3);
                        Character_BlinkStart(4, 3, (#1), 2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0304230_D01700", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "... What? You're no fun.\nAt times like this, you should\npretend not to know.");
                        Message_CloseMsg();
                        Character_Chara_GS2(4, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 4);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M4", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 0, 10);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0304230_D01800", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "Sounds good! That looks interesting!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                        Character_ChFace(1, 0, 10);
                        Character_ChFace(1, 4, 1);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0304230_D01900", #1, "");
                        Message_Who(4);
                        Message_MsgDisp("Hariya", "You really go crazy!");
                        Message_CloseMsg();
                        Character_Chara_GS2(4, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(47, 0, 4);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M4", 235);
                        break ;
                        case 2:
                        break ;
                        }
                    break ;
                    }
                }
            }
        else if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304230_D02000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What should we ride?");
            Message_MsgSel("I prefer the Roller Coaster.", "Let's ride the Ferris Wheel.", "I want to ride the Merry-go-round.");
            switch (Message_TextSelect()){
                case 0:
                Character_ChFace(1, 3, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0304230_D02100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Okay!\nToday's goal is to hold hands until\nthe day ends.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0304230_D02200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ah, I want to ride it immediately～!");
                Message_CloseMsg();
                Character_Chara_GS2(4, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 4);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M4", 231);
                break ;
                case 1:
                Message_ResumeSkinship();
                Voice_PlayVoice("B0304230_D02300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Okay, let's try.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Character_BlinkStart(4, 2, (#1), 2);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0304230_D02400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "The Ferris Wheel sure is slow...\nI'm sure there are guys dozing off.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(4, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 4);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M4", 232);
                break ;
                case 2:
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(4, 3, (#1), 2);
                Character_ChFace(1, 3, 4);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0304230_D02500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "*Sigh～*...\nIn the meantime, shall we go?");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_BlinkStart(4, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0304230_D02600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I rode this before and got dizzy～...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Character_BlinkStart(4, 2, (#1));
                Message_PauseSkinship();
                Voice_PlayVoice("B0304230_D02700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "When I was a kid.\nIt was turning around too much...\nDidn't know where to look.");
                Message_CloseMsg();
                Character_Chara_GS2(4, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(45, 0, 4);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M4", 233);
                break ;
                }
            }
        }
    else if (var3 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304230_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Which one should we go on then?");
        Message_MsgSel("Let's ride the Roller Coaster.", "Let's ride the Ferris Wheel.", "I want to ride the Merry-go-round.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304230_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Of course! It has to be that!\nDon't walk drowsily, go faster!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304230_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Woooah, amazing!\nScary things is something I can't\nget enough of!\nAh, I want to ride it now!");
            Message_CloseMsg();
            Character_Chara_GS2(4, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(43, 0, 4);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 231);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304230_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, sure.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304230_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're coming.\nWe'll miss it if you keep dozing.");
            SoundEffect_PlayStream(3, "SS_T_00_231_M00");
            Message_CloseMsg();
            Character_Chara_GS2(4, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(44, 0, 4);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 232);
            break ;
            case 2:
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304230_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Are you serious!? ...\nIt can't be helped...\nI'll go with you.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Character_BlinkStart(4, 3, (#1));
            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304230_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I don't want the fans to know that I\nrode this...\n*Sigh*...");
            Message_CloseMsg();
            Character_Chara_GS2(4, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(45, 0, 4);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 233);
            break ;
            }
        }
    if (Date_ChkDateOpen(72) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304230_D05000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh.\nThey said they're having a Night\nParade.\nWould you like to watch?");
        Message_MsgSel("Yeah, I want to watch it!", "Not today.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304230_D05100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, I've been waiting a long time\nfor this.\nOkay, I'll go find the best spot!");
            Message_CloseMsg();
            Music_StopBGM(0, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 236);
            Date_NightDate(0, 1);
            break ;
            case 1:
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0304230_D05200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What's with that? You're no fun.\nWell, if it's okay for you then it's\nfine...");
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
