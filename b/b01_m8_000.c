section "b01_m8_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5 = Date_Date_Trable1();
    int var6;
    int var7;
    int var8;
    int var9;
    int var10;
    if (Parameter_GetCh1Param(8, 130) <= 3){
        var7 = 80;
        var8 = 20;
        }
    else if (Parameter_GetCh1Param(8, 130) >= 4){
        var7 = 80;
        var8 = 20;
        }
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    System_GlobalWork(3, 0, 0);
    System_GlobalWork(4, 0, 0);
    System_GlobalWork(5, 0, 0);
    System_GlobalWork(6, 0, 0);
    System_GlobalWork(7, 0, 0);
    Date_NightDate(0, 0);
    Parameter_InPl1Param(337, 0);
    var1 = Date_Get_Date_Place2();
    Date_SetDateInfoData(var1);
    if (Date_GetDateOption(5) != 1){
        if (var1 == 6){
            if (Date_ChkDateOpen(15) == 1){
                Run_Kigae(4);
                }
            else {
                Run_Kigae(0);
                }
            }
        else if (var1 == 12){
            Run_Kigae(4);
            }
        else if (var1 == 5){
            Run_Kigae(1);
            }
        else {
            Run_Kigae(0);
            }
        }
    if (var10 == 0){
        var1 = Date_Get_Date_Place2();
        if (var5 == 1){
            System_GlobalWork(2, 0, 8);
            System_Call_GS2("B00", "PL", 0);
            }
        }
    if (Date_Date_Data(7) == 4){
        var6 = 0;
        }
    else if (Date_Date_Data(7) != 4){
        if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(8, 130) >= 4) && (var9 == 0)){
            var6 = 1;
            }
        }
    if (System_GlobalWork(7, 1) == 0){
        if ((var5 == 0) && (var10 == 0)){
            Background_Bg_GS2("待ち合わせ場所背景", #1, #1, 0, 0, Date_Date_Data(2));
            Screen_WipeIn(2);
            }
        if (System_GlobalWork(4, 1) == 0){
            var0 = System_Randam(0, 100);
            }
        else if (System_GlobalWork(4, 1) == 1){
            var0 = 95;
            }
        else if (System_GlobalWork(4, 1) == 2){
            var0 = 5;
            }
        if ((var0 <= var7) && (var4 == 0)){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I came a little later than the\nagreed time...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Masaki＊＊｝ is...\nAh, he's here!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝! I'm sorry!\nDid you wait?");
            if (Parameter_GetCh1Param(8, 130) <= 2){
                Character_Chara_GS2(8, "M8_D?F", 0);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 3);
                Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
                Voice_PlayVoice("B0108000_H00000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "You're here!\nIt takes a lot of guts to make a\nsenpai wait.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I-I'm sorry!");
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(8, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0108000_H00100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "On our next job, I'll educate you on\nthe hardships of society.\nPrepare yourself for it～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                }
            else if (Parameter_GetCh1Param(8, 130) == 3){
                Character_Chara_GS2(8, "M8_D?F", 0);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
                Voice_PlayVoice("B0108000_H00200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "A little.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0108000_H00300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nIt's okay since I'm your company.\nHowever, you better be careful when\nyou go out into the real world.");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay... I will be careful.");
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(8, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0108000_H00400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Take an important note to keep an\nopen-mind on things like this.\nWell then, let's go!");
                }
            else {
                Character_Chara_GS2(8, "M8_D?F", 0);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
                Voice_PlayVoice("B0108000_H00500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I don't mind waiting...\nBut, so I won't get worried, at\nleast give me a call, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes, I am so sorry...");
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Voice_PlayVoice("B0108000_H00600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Yeah. So, let's proceed.");
                }
            }
        else if ((var0 >= var7) && (var4 == 0)){
            Message_Who(0);
            Message_MsgDisp("主人公", "(It seems like ｛Masaki＊＊｝\nhasn't come, yet...)");
            if (var6 == 1){
                System_Call_GS2("B11", "M8", 0);
                var3 = 1;
                }
            else {
                if (Parameter_GetCh1Param(8, 130) <= 2){
                    Character_Chara_GS2(8, "M8_D?F", 0);
                    Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
                    Voice_PlayVoice("B0108000_H00700", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Sorry! Did I keep you waiting?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "No, I arrived a bit early.");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("B0108000_H00800", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "It's natural for a person.\nExcellent, excellent.\nI must follow your example.");
                    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0108000_H00900", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "So, let's get going.");
                    }
                else if (Parameter_GetCh1Param(8, 130) == 3){
                    Character_Chara_GS2(8, "M8_D?F", 0);
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(8, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
                    Voice_PlayVoice("B0108000_H01000", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "I'm so sorry...\nI've kept you waiting.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "No, I just got here, as well....\nAre you alright?");
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(8, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("B0108000_H01100", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Umm, yeah...\nI was writing a report until dawn...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Being a university student sounds\nserious.");
                    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
                    Character_ChFace(1, 0, 9);
                    Voice_PlayVoice("B0108000_H01200", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "Well... Ah, not that bad. Sorry.\nI'll treat you to a coffee. Come.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Okay!");
                    }
                else {
                    Character_Chara_GS2(8, "M8_D?F", 0);
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 4);
                    Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
                    Voice_PlayVoice("B0108000_H01300", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "I'm sorry!\nThe streets were more crowded than I\nthought...\nI've kept you waiting long enough.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "No, I just got here, too. It's okay.");
                    Character_ChFace(0, 4, 0);
                    Character_ChFace(0, 0, 9);
                    Character_BlinkStart(8, 3, (#1));
                    Voice_PlayVoice("B0108000_H01400", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "...\nIn addition to making you wait,\nmaking you fuss over me disqualifies\nme as a man and your senior.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "... Pardon?");
                    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(8, 0, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0108000_H01500", #1, "");
                    Message_Who(8);
                    Message_MsgDisp("Masaki", "...\nFrom this point onward I will try\nnot to make you wait.\nI'll leave ahead of time...\nWell then, let's get moving.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Okay.");
                    }
                }
            }
        if ((var3 == 0) && (var10 == 0)){
            System_Call_GS2("B02", "M8", 0);
            }
        else {
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        if (var10 == 0){
            var1 = Date_Get_Date_Place2();
            Music_StopBGM(0, 40);
            switch (var1){
                case 0:
                System_Call_GS2("B03", "M8", 10);
                break ;
                case 3:
                System_Call_GS2("B03", "M8", 40);
                Screen_WipeOut(2);
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
                Screen_WipeIn(2);
                break ;
                case 4:
                System_Call_GS2("B03", "M8", 50);
                break ;
                case 5:
                System_Call_GS2("B03", "M8", 51);
                break ;
                case 9:
                if (Parameter_ChkSpEvent("B05", "M8", 2) == 1){
                    System_Call_GS2("B05", "M8", 2);
                    }
                else {
                    System_Call_GS2("B03", "M8", 80);
                    }
                break ;
                case 10:
                System_Call_GS2("B03", "M8", 90);
                break ;
                case 11:
                System_Call_GS2("B03", "M8", 100);
                break ;
                case 14:
                System_Call_GS2("B03", "M8", 130);
                break ;
                case 15:
                System_Call_GS2("B03", "M8", 140);
                break ;
                case 16:
                System_Call_GS2("B03", "M8", 150);
                break ;
                case 19:
                System_Call_GS2("B03", "M8", 180);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(8, "NON");
                Environment_PauseME(0);
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Environment_ResumeME(0);
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
                Screen_WipeIn(2);
                break ;
                case 23:
                if (Parameter_ChkSpEvent("B05", "M8", 1) == 1){
                    System_Call_GS2("B05", "M8", 1);
                    }
                break ;
                case 25:
                System_Call_GS2("B03", "M8", 260);
                break ;
                }
            }
        var1 = Date_Get_Date_Place2();
        switch (var1){
            case 0:
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 1:
            break ;
            case 2:
            break ;
            case 3:
            Message_CloseMsg();
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            break ;
            case 4:
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_CO_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 5:
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 6:
            break ;
            case 7:
            break ;
            case 8:
            break ;
            case 9:
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 10:
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 11:
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP500_WI_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 12:
            break ;
            case 13:
            break ;
            case 14:
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_NE100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 15:
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_NE200_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 16:
            if (System_GlobalWork(3, 1) == 0){
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
                if (Date_ChkDateOpen(47) == 1){
                    Background_Bg_GS2("BG_NE303_CO_1", #1, #1, 0);
                    }
                else if (Date_ChkDateOpen(46) == 1){
                    Background_Bg_GS2("BG_NE302_CO_1", #1, #1, 0);
                    }
                else if (Date_ChkDateOpen(44) == 1){
                    Background_Bg_GS2("BG_NE301_CO_1", #1, #1, 0);
                    }
                else {
                    Background_Bg_GS2("BG_NE300_CO_1", #1, #1, 0);
                    }
                Screen_WipeIn(2);
                }
            else {
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
                Background_Bg_GS2("BG_WF000_?_1", 1, #1, 0);
                Screen_WipeIn(2);
                }
            break ;
            case 17:
            break ;
            case 18:
            break ;
            case 19:
            Message_CloseMsg();
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            break ;
            case 20:
            break ;
            case 21:
            break ;
            case 22:
            break ;
            case 23:
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR500_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 24:
            break ;
            case 25:
            var2 = System_Randam(0, 100);
            if (var2 <= 50){
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
                Background_Bg_GS2("BG_FP000_?_1", 1, #1, 0);
                Screen_WipeIn(2);
                }
            else if (var2 >= 51){
                Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 5);
                Background_Bg_GS2("BG_WF000_?_1", 1, #1, 0);
                Screen_WipeIn(2);
                }
            break ;
            }
        System_Call_GS2("B06", "M8", 0);
        System_Call_GS2("B70", "M8", 0);
        Parameter_AddCh1Param(8, 64, 1);
        }
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    System_GlobalWork(3, 0, 0);
    System_GlobalWork(4, 0, 0);
    System_GlobalWork(5, 0, 0);
    System_GlobalWork(6, 0, 0);
    System_GlobalWork(7, 0, 0);
    }
