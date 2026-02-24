section "l04_m6_000"{
    int var0;
    int var1;
    int var2 = 0;
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_01F", 0);
        Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
        Voice_PlayVoice("L0406000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, Senpai. What is the matter?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is Valentine's Day!\nHere, it's chocolate.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_01F", 0);
        Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
        Voice_PlayVoice("L0406000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hello～. What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is Valentine's Day!\nHere, it's chocolate.");
        }
    else if (Parameter_GetCh1Param(6, 130) >= 4){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_01F", 0);
        Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
        Voice_PlayVoice("", 6, "L0406000_F00200");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝! W-What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, something's up.... Here.\nIt's Valentine's chocolate.");
        }
    if (Parameter_GetCh1Param(6, 130) >= 2){
        if (Parameter_GetPl1Param(36) == 1){
            var0 = Parameter_GetPl1Param(36);
            if (Parameter_ChkChar(6, 3)){
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0406000_F00300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Thank you very much.\nI will eat this later.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I'm glad. He looked quite happy.)");
                    Parameter_AddCh1Param(6, 61, 0);
                    Parameter_AddCh1Param(6, 60, 3);
                    Parameter_AddCh1Param(6, 62, #1);
                    }
                else if (Parameter_GetCh1Param(6, 130) == 3){
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0406000_F00400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Hm, thanks. Later.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's that.)");
                    Parameter_AddCh1Param(6, 61, 0);
                    Parameter_AddCh1Param(6, 60, 6);
                    Parameter_AddCh1Param(6, 62, 0);
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 4){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("L0406000_F00500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "For me? ...\nUmm, is this really for me? Uhh...\nthanks. Later.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(｛Amachi＊＊｝ somehow\nlooked down...)");
                    Parameter_AddCh1Param(6, 61, #1);
                    Parameter_AddCh1Param(6, 60, 0);
                    Parameter_AddCh1Param(6, 62, 10);
                    }
                Parameter_InCh1Param(6, 555, 5);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(37) == 1){
            var0 = Parameter_GetPl1Param(37);
            if (Parameter_ChkChar(6, 3)){
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0406000_F00600", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Whoa, this looks yummy!\nThank you very much!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I'm glad.\nHe looked relatively happy.)");
                    Parameter_AddCh1Param(6, 61, 3);
                    Parameter_AddCh1Param(6, 60, 3);
                    Parameter_AddCh1Param(6, 62, #1);
                    }
                else if (Parameter_GetCh1Param(6, 130) == 3){
                    Character_ChFace(0, 4, 1);
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0406000_F00700", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ah, I know this!\nThis is really yummy. Thanks.\nI'll eat it later!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy.)");
                    Parameter_AddCh1Param(6, 61, 3);
                    Parameter_AddCh1Param(6, 60, 10);
                    Parameter_AddCh1Param(6, 62, #1);
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 4){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(6, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0406000_F00800", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ah, I know this! It's quite popular.\nIt was tough getting one, wasn't it?");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(6, 3, (#1));
                    Voice_PlayVoice("", 6, "L0406000_F00900");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Thanks, ｛主人公｝!\nI'll treasure it, and eat it little\nby little!!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yeah, he looked happy. Yes!)");
                    Parameter_AddCh1Param(6, 61, 6);
                    Parameter_AddCh1Param(6, 60, 10);
                    Parameter_AddCh1Param(6, 62, #1);
                    }
                Parameter_InCh1Param(6, 555, 4);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 1){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(6, 3)){
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0406000_F01000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Is this hand made? That is amazing!\nI will gratefully accept this.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yeah, he looked quite happy.)");
                    Parameter_AddCh1Param(6, 61, 3);
                    Parameter_AddCh1Param(6, 60, 6);
                    Parameter_AddCh1Param(6, 62, #3);
                    }
                else if (Parameter_GetCh1Param(6, 130) == 3){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(6, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0406000_F01100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ehh, it's hand made.\nIt's also quite decent.\nWhat an unexpected talent you have.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ugh...");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0406000_F01200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ahaha! Anyway, I'll take this.\nThanks!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh. He looked happy.)");
                    Parameter_AddCh1Param(6, 61, 6);
                    Parameter_AddCh1Param(6, 60, 10);
                    Parameter_AddCh1Param(6, 62, #3);
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 4){
                    Character_ChFace(0, 4, 0);
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0406000_F01300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ehh, it's hand made!\nIt looks pretty, but I wonder how it\nactually is.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ehh.");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0406000_F01400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ahaha, I'm joking!\nIf it's something you made, Senpai,\nit'd surely be yummy.");
                    Character_BlinkStart(6, 2, (#1));
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("", 6, "L0406000_F01500");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Thanks, ｛主人公｝!\nI'll eat it all!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I'm glad! He looked really happy!)");
                    Parameter_AddCh1Param(6, 61, 10);
                    Parameter_AddCh1Param(6, 60, 10);
                    Parameter_AddCh1Param(6, 62, #3);
                    }
                Parameter_InCh1Param(6, 555, 1);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 2){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(6, 3)){
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0406000_F01600", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Eh, is this hand made?\nI will gratefully accept this.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yeah, he looked relatively happy.)");
                    Parameter_AddCh1Param(6, 61, 3);
                    Parameter_AddCh1Param(6, 60, 3);
                    Parameter_AddCh1Param(6, 62, #1);
                    }
                else if (Parameter_GetCh1Param(6, 130) == 3){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("L0406000_F01700", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Hand made, huh. Is this edible?");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0406000_F01800", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Kidding～.\nI'm just kidding, I gratefully\naccept this～!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yeah, he looked relatively happy.)");
                    Parameter_AddCh1Param(6, 61, 3);
                    Parameter_AddCh1Param(6, 60, 3);
                    Parameter_AddCh1Param(6, 62, #3);
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 4){
                    Character_ChFace(0, 0, 10);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0406000_F01900", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ehh, it's hand made!\nDidn't you do well!");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(6, 3, (#1));
                    Voice_PlayVoice("L0406000_F02000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "I'll eat it all....\nBut be ready for my harsh criticism!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank goodness. He looked happy.)");
                    Parameter_AddCh1Param(6, 61, 3);
                    Parameter_AddCh1Param(6, 60, 6);
                    Parameter_AddCh1Param(6, 62, #3);
                    }
                Parameter_InCh1Param(6, 555, 2);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 3){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(6, 3)){
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0406000_F02100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "...\nUhh, this is hand made, isn't it?\nHmm...");
                    Character_BlinkStart(6, 2, (#1));
                    Voice_PlayVoice("L0406000_F02200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Umm... Thank you very much for it.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(...\nHe didn't really look happy to\nreceive it.)");
                    Parameter_AddCh1Param(6, 61, #1);
                    Parameter_AddCh1Param(6, 60, 0);
                    Parameter_AddCh1Param(6, 62, 3);
                    }
                else if (Parameter_GetCh1Param(6, 130) == 3){
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(6, 2, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0406000_F02300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Uhh, what is this?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "??? It's chocolate.");
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(6, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0406000_F02400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "I... see.\nThis would be hard to eat...");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(...\nHe didn't really look happy to\nreceive it.)");
                    Parameter_AddCh1Param(6, 61, 3);
                    Parameter_AddCh1Param(6, 60, 3);
                    Parameter_AddCh1Param(6, 62, #1);
                    }
                else if (Parameter_GetCh1Param(6, 130) >= 4){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0406000_F02500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Uhh. It's h-hand made...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.");
                    Character_BlinkStart(6, 2, (#1));
                    Voice_PlayVoice("L0406000_F02600", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Uhh... thanks. I'm glad... I think?");
                    Character_BlinkStart(6, 3, (#1));
                    Voice_PlayVoice("L0406000_F02700", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Well, it's fine. It's surely...\nsomething that humans can eat.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(6, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(What's up with\n｛Amachi＊＊｝?\nHe's muttering to himself...)");
                    Parameter_AddCh1Param(6, 61, 3);
                    Parameter_AddCh1Param(6, 60, 3);
                    Parameter_AddCh1Param(6, 62, #3);
                    }
                Parameter_InCh1Param(6, 555, 3);
                }
            else {
                var1 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(6, 130) < 2){
        if (Parameter_GetPl1Param(36) == 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("L0406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thank you very much.\nI will eat this later.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank goodness.\nHe looked relatively happy.)");
            Parameter_AddCh1Param(6, 61, 0);
            Parameter_AddCh1Param(6, 60, 3);
            Parameter_AddCh1Param(6, 62, #1);
            Parameter_InCh1Param(6, 555, 5);
            }
        else {
            Voice_PlayVoice("L0406000_F03100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thank you very much....\nHowever, your feelings are enough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Eh?");
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("L0406000_F03200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I am glad that you did this for\nme...\nBut I cannot accept this.");
            Character_BlinkStart(6, 0, (#1));
            Voice_PlayVoice("L0406000_F03300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please give it to the person that\nyou should be giving it to....\nExcuse me.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He couldn't accept it...\nThat's unfortunate...)");
            var2 = System_GlobalWork(23, 1);
            if (var2 == #1){
                var2 = 0;
                }
            if (Parameter_ExtChar(0, 6, 2, 1, var2) == 0){
                if (Parameter_ExtChar(0, 6, 1, 0) == 6){
                    var1 = 1;
                    }
                else if (Parameter_ExtChar(0, 6, 1, 0) == 0){
                    if (Parameter_ExtChar(0, 6, 0, 0) == 6){
                        var1 = 1;
                        }
                    }
                }
            if (var1 == 1){
                Character_Chara_GS2(6, "NON");
                switch (var2){
                    case 1:
                    System_Call_GS2("F99", "M1", 0);
                    break ;
                    case 2:
                    System_Call_GS2("F99", "M2", 0);
                    break ;
                    case 3:
                    System_Call_GS2("F99", "M3", 0);
                    break ;
                    case 4:
                    System_Call_GS2("F99", "M4", 0);
                    break ;
                    case 5:
                    System_Call_GS2("F99", "M5", 0);
                    break ;
                    case 7:
                    System_Call_GS2("F99", "M7", 0);
                    break ;
                    }
                }
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
