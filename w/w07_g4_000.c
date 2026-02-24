section "w07_g4_000"{
    int var0 = 0;
    System_GlobalWork(3, 0, 0);
    int var1;
    int var2;
    Character_Chara_GS2(13, "G4_04F", 0);
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0713000_M00000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "The roller coaster.\nHey, who do you want to ride with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 5) && (var1 != 13)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0713000_M00100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Really?\nThen I will ride with Chris-kun!");
            }
        else if (var1 == 5){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0713000_M00200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "It's fine. So Saeki-kun and I then?");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0713000_M00300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "It's fine. So Shiba-kun and I then?");
                }
            else if (Date_GetDateOption(8) == 3){
                Voice_PlayVoice("W0713000_M00400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "It's fine. So Hikami-kun and I then?");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0713000_M00500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "It's fine. So Hariya-kun and I then?");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0713000_M00600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "It's fine. So Amachi-kun and I then?");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Voice_PlayVoice("W0713000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... With me? Sounds good.\n*Giggles* Shall we get on?");
            System_Call_GS2("W09", "G4", 0);
            var2 = 13;
            }
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0713000_M00800", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Who do you want to ride the Ferris\nWheel with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 5) && (var1 != 13)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0713000_M00900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Really?\nThen I will ride with Chris-kun...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Be careful. With umm...\n｛Chris＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0713000_M01000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Oh, it'll be okay!\n*Giggles*");
            }
        else if (var1 == 5){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0713000_M01100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? Okay, it's fine.\nThen I'm with Saeki-kun.");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0713000_M01200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? Okay, it's fine.\nThen I'm with Shiba-kun.");
                }
            else if (Date_GetDateOption(8) == 3){
                Voice_PlayVoice("W0713000_M01300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? Okay, it's fine.\nThen I'm with Hikami-kun.");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0713000_M01400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? Okay, it's fine.\nThen I'm with Hariya-kun.");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0713000_M01500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? Okay, it's fine.\nThen I'm with Amachi-kun.");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Voice_PlayVoice("W0713000_M01600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... With me? Is that okay? Mmm～...\nIt's fine. Shall we get on?");
            System_Call_GS2("W09", "G4", 0);
            var2 = 13;
            }
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0713000_M01700", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "I'm a little scared...\nWho do you want to go with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 5) && (var1 != 13)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0713000_M01800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Is that so? Then I'm with Chris-kun?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, is that safe?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0713000_M01900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Oh, it's safe alright!\nI'll drive carefully!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm not sure about that...)");
            }
        else if (var1 == 5){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0713000_M02000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Okay... Then I'm with Saeki-kun?");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0713000_M02100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Okay... Then I'm with Shiba-kun?");
                }
            else if (Date_GetDateOption(8) == 3){
                Voice_PlayVoice("W0713000_M02200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Okay... Then I'm with Hikami-kun?");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0713000_M02300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Okay... Then I'm with Hariya-kun?");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0713000_M02400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Okay... Then I'm with Amachi-kun?");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0713000_M02500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "With me?\nThe two of us will be fine...\nWell then, shall we go?");
            System_Call_GS2("W09", "G4", 0);
            var2 = 13;
            }
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0713000_M02600", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "The Haunted House! Sounds fun!\nHey, who do you want to enter with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 5) && (var1 != 13)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0713000_M02700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Then I'm with Chris-kun?\nI'm a little nervous...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, then I will go...");
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0713000_M02800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I don't think so! Ah... No!\nThat's okay, really! It's okay!");
            }
        else if (var1 == 5){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0713000_M02900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Umm, really? No, it's fine.\nI'm with Saeki-kun then.");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0713000_M03000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Umm, really? No, it's fine.\nI'm with Shiba-kun then.");
                }
            else if (Date_GetDateOption(8) == 3){
                Voice_PlayVoice("W0713000_M03100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Umm, really? No, it's fine.\nI'm with Hikami-kun then.");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0713000_M03200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Umm, really? No, it's fine.\nI'm with Hariya-kun then.");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0713000_M03300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Umm, really? No, it's fine.\nI'm with Amachi-kun then.");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Voice_PlayVoice("W0713000_M03400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "With me? Is that okay? Eh～...\nOkay, shall we go?");
            System_Call_GS2("W09", "G4", 0);
            var2 = 13;
            }
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0713000_M03500", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "The Merry-go-round!\nWe still have to ride this.\nHey, who do you want to ride with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 5) && (var1 != 13)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0713000_M03600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Honestly!! Ah... Nevermind!\nWell, I will ride with Chris-kun...");
            }
        else if (var1 == 5){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0713000_M03700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? It's fine.\nI will ride with Saeki-kun then!");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0713000_M03800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? It's fine.\nI will ride with Shiba-kun then!");
                }
            else if (Date_GetDateOption(8) == 3){
                Voice_PlayVoice("W0713000_M03900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? It's fine.\nI will ride with Hikami-kun then!");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0713000_M04000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? It's fine.\nI will ride with Hariya-kun then!");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0713000_M04100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Really...? It's fine.\nI will ride with Amachi-kun then!");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0713000_M04200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Hey, is riding with me really okay?\nNevermind! I don't mind...");
            System_Call_GS2("W09", "G4", 0);
            var2 = 13;
            }
        }
    if (var1 == 5){
        Character_Chara_GS2(13, "NON");
        System_Call_GS2("W08", "M5", 0);
        var2 = 5;
        }
    else if ((var1 != 5) && (var1 != 13)){
        Character_Chara_GS2(13, "NON");
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
        else if (Date_GetDateOption(8) == 4){
            System_Call_GS2("W08", "M4", 0);
            var2 = 4;
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
