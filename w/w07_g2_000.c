section "w07_g2_000"{
    int var0 = 0;
    System_GlobalWork(3, 0, 0);
    int var1;
    int var2;
    Character_Chara_GS2(11, "G2_04F", 0);
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0711000_K00000", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Who do you want to ride on the\nroller coaster with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 3) && (var1 != 11)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0711000_K00100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Eh!?\nT-Then Hikami-kun and I will form a\ngroup.");
            }
        else if (var1 == 3){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0711000_K00200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will ride with Saeki-kun?");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0711000_K00300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will ride with Shiba-kun?");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0711000_K00400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will ride with Hariya-kun?");
                }
            else if (Date_GetDateOption(8) == 5){
                Voice_PlayVoice("W0711000_K00500", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will ride with\nWeatherfield-kun?");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0711000_K00600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will ride with Amachi-kun?");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0711000_K00700", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "With me? Okay... I do not mind.");
            System_Call_GS2("W09", "G2", 0);
            var2 = 11;
            }
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", #1, "W0711000_K00800");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Who do you want to get on the Ferris\nWheel with, ｛主人公｝?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 3) && (var1 != 11)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0711000_K00900", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "W-Well, if you ride with him, it\nwould require me to ride with\nHikami-kun!\nThere are only four of us.\nIt can't be helped!");
            }
        else if (var1 == 3){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0711000_K01000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will get on with Saeki-kun?");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0711000_K01100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will get on with Shiba-kun?");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0711000_K01200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will get on with Hariya-kun?");
                }
            else if (Date_GetDateOption(8) == 5){
                Voice_PlayVoice("W0711000_K01300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will get on with\nWeatherfield-kun?");
                Voice_PlayVoice("W0711000_K01400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Isn't being by myself bad...?\nI have a bit of a bad feeling about\nthis.");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0711000_K01500", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will get on with Amachi-kun?");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0711000_K01600", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "With me? Okay... I do not mind.");
            System_Call_GS2("W09", "G2", 0);
            var2 = 11;
            }
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", #1, "W0711000_K01700");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Who would you like to pair with,\n｛主人公｝?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 3) && (var1 != 11)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0711000_K01800", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... Eh!?\nW-Well that would make Hikami-kun\nand I, a pair.\nFour minus two is two!");
            }
        else if (var1 == 3){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0711000_K01900", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will pair with Saeki-kun?");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0711000_K02000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will pair with Shiba-kun?");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0711000_K02100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will pair with Hariya-kun?");
                }
            else if (Date_GetDateOption(8) == 5){
                Voice_PlayVoice("W0711000_K02200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will pair with\nWeatherfield-kun?");
                Voice_PlayVoice("", #1, "W0711000_K02300");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝. I...\nI have an unpleasant feeling.\nWill you stay in sight?");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0711000_K02400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will pair with Amachi-kun?");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0711000_K02500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "With me? Okay... I do not mind.");
            System_Call_GS2("W09", "G2", 0);
            var2 = 11;
            }
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0711000_K02600", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "The Haunted House.\nWho do you want to enter with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 3) && (var1 != 11)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0711000_K02700", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "W-Well by process of elimination\nthat would make Hikami-kun be with\nme!?\nYes, well, it's by process of\nelimination.");
            }
        else if (var1 == 3){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0711000_K02800", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will enter with Saeki-kun?");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0711000_K02900", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will enter with Shiba-kun?");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0711000_K03000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will enter with Hariya-kun?");
                }
            else if (Date_GetDateOption(8) == 5){
                Voice_PlayVoice("W0711000_K03100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Then I will enter with\nWeatherfield-kun.\nI am afraid in many ways...");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0711000_K03200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "So I will enter with Amachi-kun?");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0711000_K03300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Oh, the two of us? *Sigh*...\nI do not mind.");
            System_Call_GS2("W09", "G2", 0);
            var2 = 11;
            }
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", #1, "W0711000_K03400");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Who will you sit with,\n｛主人公｝?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 3) && (var1 != 11)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("W0711000_K03500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I-Is that so?\nThen I will sit with Hikami-kun!");
            }
        else if (var1 == 3){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            Character_ChFace(0, 0, 9);
            if (Date_GetDateOption(8) == 1){
                Voice_PlayVoice("W0711000_K03600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Then I will sit with Saeki-kun?");
                }
            else if (Date_GetDateOption(8) == 2){
                Voice_PlayVoice("W0711000_K03700", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Then I will sit with Shiba-kun?");
                }
            else if (Date_GetDateOption(8) == 4){
                Voice_PlayVoice("W0711000_K03800", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Then I will sit with Hariya-kun?");
                }
            else if (Date_GetDateOption(8) == 5){
                Voice_PlayVoice("W0711000_K03900", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Then I will sit with\nWeatherfield-kun?");
                Voice_PlayVoice("", #1, "W0711000_K04000");
                Message_Who(11);
                Message_MsgDisp("Onoda", "｛主人公｝.\nI have a bad feeling.\nIs it possible for you to stay\nclose?");
                }
            else if (Date_GetDateOption(8) == 6){
                Voice_PlayVoice("W0711000_K04100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Then I will sit with Amachi-kun?");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("W0711000_K04200", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Eh, the two of us? ....\nOkay, I do not mind.");
            System_Call_GS2("W09", "G2", 0);
            var2 = 11;
            }
        }
    if (var1 == 3){
        Character_Chara_GS2(11, "NON");
        System_Call_GS2("W08", "M3", 0);
        var2 = 3;
        }
    else if ((var1 != 3) && (var1 != 11)){
        Character_Chara_GS2(11, "NON");
        if (Date_GetDateOption(8) == 1){
            System_Call_GS2("W08", "M1", 0);
            var2 = 1;
            }
        else if (Date_GetDateOption(8) == 2){
            System_Call_GS2("W08", "M2", 0);
            var2 = 2;
            }
        else if (Date_GetDateOption(8) == 4){
            System_Call_GS2("W08", "M4", 0);
            var2 = 4;
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
