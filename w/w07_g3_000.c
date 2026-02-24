section "w07_g3_000"{
    int var0 = 0;
    System_GlobalWork(3, 0, 0);
    int var1;
    int var2;
    Character_Chara_GS2(12, "G3_04F", 0);
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", #1, "W0712000_L00000");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "｛主人公｝.\nWho are you going to ride the roller\ncoaster with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 4) && (var1 != 12)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0712000_L00100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Oh, for real...?\nIf so, then I would gladly ride with\nHarry.");
            }
        else if (var1 == 4){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L00200", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'm riding with Saeki-kun,\nright?\nOkay, got it.");
                }
            else if (Date_GetDateOption(8) == 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L00300", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'm riding with Shiba-kun,\nright?\nOkay, got it.");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L00400", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'm riding with with\nHikami-kun, right?\nOkay, got it.");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L00500", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "What! I'm with Chris!?\nYou're responsible if anything\nhappens to me, right?");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L00600", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'm riding with Amachi-kun,\nright?\nOkay, got it.");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0712000_L00700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Huh? Me? Haha...\nThis sounds like something you'd do!\nOkay, I'll hang out with you.");
            System_Call_GS2("W09", "G3", 0);
            var2 = 12;
            }
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0712000_L00800", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "The Ferris Wheel, huh...\nIt's a good idea to ride in pairs.\nWho are you gonna ride with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 4) && (var1 != 12)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0712000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Huh? For real...?\nThat means I would have to ride with\nHarry!");
            }
        else if (var1 == 4){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L01000", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'll ride with Saeki-kun...");
                }
            else if (Date_GetDateOption(8) == 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L01100", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'll ride with Shiba-kun...");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L01200", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'll ride with Hikami-kun...");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("W0712000_L01300", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Chris and the Ferris Wheel...\nWell, I guess...\nEither way, I'm really nervous...");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L01400", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'll ride with Amachi-kun...");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0712000_L01500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Huh? With me...?\nSomething doesn't seem right.\nWell, forget it.");
            System_Call_GS2("W09", "G3", 0);
            var2 = 12;
            }
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0712000_L01600", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Ah, that looks fun...!\nWho are you gonna ride with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 4) && (var1 != 12)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0712000_L01700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "So, I'm with Harry...\nHe'll probably run wild, so I'll\nhave to go along with it!");
            }
        else if (var1 == 4){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L01800", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Yeah, yeah.\nI'm with Saeki-kun, right?");
                }
            else if (Date_GetDateOption(8) == 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L01900", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Yeah, yeah.\nI'm with Shiba-kun, right?");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L02000", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Yeah, yeah.\nI'm with Hikami-kun, right?");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(12, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("W0712000_L02100", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "I'm with Chris...\nWell, I'll get over it in no time.\nIf I survive...");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L02200", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Yeah, yeah.\nI'm with Amachi-kun, right?");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0712000_L02300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "With me...?\nAah, well, if you say so.\nLet's do that. Let's go!");
            System_Call_GS2("W09", "G3", 0);
            var2 = 12;
            }
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0712000_L02400", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "The Haunted House～.\nWho do you want to go inside with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 4) && (var1 != 12)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0712000_L02500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Right!\nHarry and I are easily scared, so it\nworks out.\nYeah!");
            }
        else if (var1 == 4){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L02600", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'm with Saeki-kun, right?\nI see.");
                }
            else if (Date_GetDateOption(8) == 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L02700", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'm with Shiba-kun, right?\nI see.");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L02800", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'm with Hikami-kun, right?\nI see.");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(12, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("W0712000_L02900", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Woah...\nI'm going in with Chris......\nWhen the time comes, I'm running...");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L03000", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Then I'm with Amachi-kun, right?\nI see.");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0712000_L03100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "What!? Umm, that's... I see.\nSo, shall we go?");
            System_Call_GS2("W09", "G3", 0);
            var2 = 12;
            }
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0712000_L03200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "The Merry-go-round... So romantic.\nWho are you gonna ride with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 4) && (var1 != 12)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0712000_L03300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Then I'll take a picture of Harry\nmaking faces!\nYeah!");
            }
        else if (var1 == 4){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L03400", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Huh, ah, is that so?\nSo, I guess I'm with Saeki-kun.");
                }
            else if (Date_GetDateOption(8) == 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L03500", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Huh, ah, is that so?\nSo, I guess I'm with Shiba-kun.");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L03600", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Huh, ah, is that so?\nSo, I guess I'm with Hikami-kun.");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(12, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("W0712000_L03700", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "I'm with Chris...\nI hope he won't ask to ride the\ncarriage.\nYou should help me out, too!");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("W0712000_L03800", #1, "");
                Message_Who(12);
                Message_MsgDisp("Nishimoto", "Huh, ah, is that so?\nSo, I guess I'm with Amachi-kun.");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0712000_L03900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Haha... We're inseperable, right?\nAhaha...");
            System_Call_GS2("W09", "G3", 0);
            var2 = 12;
            }
        }
    if (var1 == 4){
        Character_Chara_GS2(12, "NON");
        System_Call_GS2("W08", "M4", 0);
        var2 = 4;
        }
    else if ((var1 != 4) && (var1 != 12)){
        Character_Chara_GS2(12, "NON");
        if (Date_GetDateOption(8) == 1){
            System_Call_GS2("W08", "M1", 0);
            var2 = 1;
            }
        else if (Date_GetDateOption(8) == 2){
            System_Call_GS2("W08", "M2", 0);
            var2 = 2;
            }
        else if (Date_GetDateOption(8) == 3){
            System_Call_GS2("W08", "M3", 0);
            var2 = 3;
            }
        else if (Date_GetDateOption(8) == 5){
            System_Call_GS2("W08", "M5", 0);
            var2 = 5;
            }
        else if (Date_GetDateOption(8) == 6){
            System_Call_GS2("W08", "M6", 0);
            var2 = 6;
            }
        }
    Message_CloseMsg();
    Environment_StopME(0, 40);
    Music_StopBGM(0, 40);
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Graphic_OpenAnim(43, 0, var1);
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Graphic_OpenAnim(44, 0, var1);
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Graphic_OpenAnim(47, 0, var1);
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Graphic_OpenAnim(46, 0, var1);
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Graphic_OpenAnim(45, 0, var1);
        }
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    Environment_PlayME(0, "", 127, 0);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
