section "w07_g1_000"{
    int var0 = 0;
    System_GlobalWork(3, 0, 0);
    int var1;
    int var2;
    int var3;
    Character_Chara_GS2(10, "G1_04F", 0);
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0710000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Who are you going to ride the Roller\nCoaster with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 2) && (var1 != 10)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0710000_J00100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "If that's the case, I will ride with\nShiba.\nYes... Good.");
            }
        else if (var1 == 2){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J00200", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I will ride with Saeki?\nWell, that's fine...");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J00300", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I will ride with Hikami?\nWell, that's fine...");
                }
            else if (Date_GetDateOption(8) == 4){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J00400", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I will ride with Hariya?\nWell, that's fine...");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J00500", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Huh? With Chris? ... Very well...");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J00600", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I will ride with Amachi?\nWell, that's fine...");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0710000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "With me...? Well, that's fine...");
            System_Call_GS2("W09", "G1", 0);
            var2 = 10;
            }
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0710000_J00800", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "The Ferris Wheel...\nWho will you ride it with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 2) && (var1 != 10)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0710000_J00900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Then I will get on with Shiba.\nYes, very well.");
            }
        else if (var1 == 2){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J01000", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Huh? Why Saeki with me...");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J01100", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Huh? Why Hikami with me...");
                }
            else if (Date_GetDateOption(8) == 4){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J01200", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Huh? Why Hariya with me...");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J01300", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Why Chris with me.... Well, fine...");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J01400", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Huh? Why Amachi with me...");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0710000_J01500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You want to ride with me...?\nYou are strange.");
            System_Call_GS2("W09", "G1", 0);
            var2 = 10;
            }
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0710000_J01600", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "It seems to be two per ride.\nWho do you want to get on with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 2) && (var1 != 10)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0710000_J01700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Then I will get on with Shiba.\nSorry, ｛主人公｝.");
            }
        else if (var1 == 2){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J01800", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I with Saeki. Very well.");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J01900", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I with Hikami. Very well.");
                }
            else if (Date_GetDateOption(8) == 4){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J02000", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I with Hariya. Very well.");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J02100", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I with Chris.\nIt can't be helped...");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J02200", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Then I with Amachi. Very well.");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0710000_J02300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Why with me...? I'm nothing special.");
            System_Call_GS2("W09", "G1", 0);
            var2 = 10;
            }
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0710000_J02400", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "The Haunted House...\nWho do you want to enter with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 2) && (var1 != 10)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0710000_J02500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Hmm... Then I will enter with Shiba.\nGood.");
            }
        else if (var1 == 2){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J02600", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Won't it be a hassle for Saeki to\nlook after me?\nWell, it's fine.");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J02700", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Won't it be a hassle for Hikami to\nlook after me?\nWell, it's fine.");
                }
            else if (Date_GetDateOption(8) == 4){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J02800", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Won't it be a hassle for Hariya to\nlook after me?\nWell, it's fine.");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J02900", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Won't it be a hassle for Chris to\nlook after me?\nWell, I guess it's safe.");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J03000", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "Won't it be a hassle for Amachi to\nlook after me?\nWell, it's fine.");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0710000_J03100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Female bonding in a haunted house...\nIt'll be a hassle for me to look\nafter you.\nWell, it's fine.");
            System_Call_GS2("W09", "G1", 0);
            var2 = 10;
            }
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("W0710000_J03200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "The Merry-go-round.\nI'm embarrassed to get on...\nWho do you want to ride with?");
        Message_Sele_Park1();
        var1 = Message_Get_Sele_Park1();
        if ((var1 != 2) && (var1 != 10)){
            System_GlobalWork(4, 2, 1);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0710000_J03300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Then I will get on with Shiba.\nAre you not pleased with this?");
            }
        else if (var1 == 2){
            System_GlobalWork(3, 0, 1);
            System_GlobalWork(4, 2, 5);
            if (Date_GetDateOption(8) == 1){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J03400", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "I will get on with Saeki...\nHah, to the Merry-go-round, Saeki.");
                }
            else if (Date_GetDateOption(8) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J03500", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "I will get on with Hikami...\nHah, to the Merry-go-round, Hikami.");
                }
            else if (Date_GetDateOption(8) == 4){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J03600", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "I will get on with Hariya...\nHah, to the Merry-go-round, Hariya.");
                }
            else if (Date_GetDateOption(8) == 5){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J03700", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "I will get on with Chris...\nI wonder if he can sit quietly.\nThis way.");
                }
            else if (Date_GetDateOption(8) == 6){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(10, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("W0710000_J03800", #1, "");
                Message_Who(10);
                Message_MsgDisp("Toudou", "I will get on with Amachi...\nHah, to the Merry-go-round, Amachi.");
                }
            }
        else {
            System_GlobalWork(4, 2, 10);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("W0710000_J03900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "How unexpectedly thoughtful of\nyou...");
            System_Call_GS2("W09", "G1", 0);
            var2 = 10;
            }
        }
    if (var1 == 2){
        Character_Chara_GS2(10, "NON");
        System_Call_GS2("W08", "M2", 0);
        var2 = 2;
        }
    else if ((var1 != 2) && (var1 != 10)){
        Character_Chara_GS2(10, "NON");
        if (Date_GetDateOption(8) == 1){
            System_Call_GS2("W08", "M1", 0);
            var2 = 1;
            }
        else if (Date_GetDateOption(8) == 3){
            System_Call_GS2("W08", "M3", 0);
            var2 = 3;
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
