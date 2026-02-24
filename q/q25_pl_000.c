section "q25_pl_000"{
    int var0;
    int var1;
    int var2;
    var0 = System_Randam(0, 99);
    var1 = System_Randam(0, 100);
    SoundEffect_PlayStream(3, "SS_T_00_287_M00");
    Voice_PlayVoice("Q2500000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Vice Principal", "Excuse me! What is going on here!?");
    Voice_PlayVoice("Q2500000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("Male Student", "Gah!! Everyone take cover!");
    SoundEffect_StopStream(3, 40);
    SoundEffect_PlayStream(3, "SS_DSE_223_000");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    SoundEffect_StopStream(3, 40);
    SoundEffect_PlayStream(2, "SS_T_00_288_S00");
    Message_Who(0);
    Message_MsgDisp("主人公", "(W-Where should I hide!?)");
    SoundEffect_StopStream(2, 40);
    Message_MsgSel("Hide in the closet", "Hide under a futon", "Hide under the table");
    switch (Message_TextSelect()){
        case 0:
        SoundEffect_PlayStream(3, "SS_T_00_275_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wah! Someone's here!)");
        SoundEffect_PlayStream(3, "SS_T_00_161_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I-It feels so awkward with someone\nbreathing so close...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It feels like my heart is in my\nmouth!\nI hope the vice principal leaves\nquickly～!!)");
        Voice_PlayVoice("Q2500000_W00200", #1, "");
        Message_Who(0);
        Message_MsgDisp("Vice Principal", "Huh? This is not the room.");
        SoundEffect_PlayStream(3, "SS_T_00_270_M00");
        Environment_StopME(1, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Phew*... Good.\nI-I'm not getting out of here any\ntime soon!)");
        SoundEffect_PlayStream(3, "SS_T_00_275_M00");
        break ;
        case 1:
        SoundEffect_PlayStream(3, "SS_DSE_150_000");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wah! Someone's here!)");
        SoundEffect_PlayStream(3, "SS_T_00_161_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I-It feels so awkward with someone\nbreathing so close...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It feels like my heart is in my\nmouth!\nI hope the vice principal leaves\nquickly～!!)");
        Voice_PlayVoice("Q2500000_W00200", #1, "");
        Message_Who(0);
        Message_MsgDisp("Vice Principal", "Huh? This is not the room.");
        SoundEffect_PlayStream(3, "SS_T_00_270_M00");
        Environment_StopME(1, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Phew*... Good.\nI-I'm not getting out of here any\ntime soon!)");
        SoundEffect_PlayStream(3, "SS_DSE_150_000");
        break ;
        case 2:
        SoundEffect_PlayStream(3, "SS_DSE_152_000");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wah! Someone's here!)");
        SoundEffect_PlayStream(3, "SS_T_00_161_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I-It feels so awkward with someone\nbreathing so close...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It feels like my heart is in my\nmouth!\nI hope the vice principal leaves\nquickly～!!)");
        Voice_PlayVoice("Q2500000_W00200", #1, "");
        Message_Who(0);
        Message_MsgDisp("Vice Principal", "Huh? This is not the room.");
        SoundEffect_PlayStream(3, "SS_T_00_270_M00");
        Environment_StopME(1, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Phew*... Good.\nI-I'm not getting out of here any\ntime soon!)");
        SoundEffect_PlayStream(3, "SS_DSE_152_000");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (var0 <= 33){
        if (System_GlobalWork(4, 1) == 1){
            var2 = 1;
            }
        else if (System_GlobalWork(4, 1) == 2){
            var2 = 2;
            }
        else if (System_GlobalWork(4, 1) == 3){
            var2 = 3;
            }
        else if (System_GlobalWork(4, 1) == 4){
            var2 = 4;
            }
        else if (System_GlobalWork(4, 1) == 5){
            var2 = 5;
            }
        }
    else if ((var0 >= 33 || var0 <= 66)){
        if (var1 <= 50){
            if (System_GlobalWork(5, 1) == 1){
                var2 = 1;
                }
            else if (System_GlobalWork(5, 1) == 2){
                var2 = 2;
                }
            else if (System_GlobalWork(5, 1) == 3){
                var2 = 3;
                }
            else if (System_GlobalWork(5, 1) == 4){
                var2 = 4;
                }
            else if (System_GlobalWork(5, 1) == 5){
                var2 = 5;
                }
            }
        else {
            if (System_GlobalWork(6, 1) == 7){
                var2 = 7;
                }
            else if (System_GlobalWork(6, 1) == 10){
                var2 = 10;
                }
            else if (System_GlobalWork(6, 1) == 11){
                var2 = 11;
                }
            else if (System_GlobalWork(6, 1) == 12){
                var2 = 12;
                }
            else if (System_GlobalWork(6, 1) == 13){
                var2 = 13;
                }
            }
        }
    else {
        if (System_GlobalWork(6, 1) == 7){
            var2 = 7;
            }
        else if (System_GlobalWork(6, 1) == 10){
            var2 = 10;
            }
        else if (System_GlobalWork(6, 1) == 11){
            var2 = 11;
            }
        else if (System_GlobalWork(6, 1) == 12){
            var2 = 12;
            }
        else if (System_GlobalWork(6, 1) == 13){
            var2 = 17;
            }
        }
    if (var2 == 1){
        System_Call_GS2("Q25", "M1", 0);
        }
    else if (var2 == 2){
        System_Call_GS2("Q25", "M2", 0);
        }
    else if (var2 == 3){
        System_Call_GS2("Q25", "M3", 0);
        }
    else if (var2 == 4){
        System_Call_GS2("Q25", "M4", 0);
        }
    else if (var2 == 5){
        System_Call_GS2("Q25", "M5", 0);
        }
    else if (var2 == 7){
        System_Call_GS2("Q25", "M7", 0);
        }
    else if (var2 == 10){
        System_Call_GS2("Q25", "G1", 0);
        }
    else if (var2 == 11){
        System_Call_GS2("Q25", "G2", 0);
        }
    else if (var2 == 12){
        System_Call_GS2("Q25", "G3", 0);
        }
    else if (var2 == 13){
        System_Call_GS2("Q25", "G4", 0);
        }
    }
