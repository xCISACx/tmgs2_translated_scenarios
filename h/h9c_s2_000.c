section "h9c_s2_000"{
    int var0;
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "I'm in charge of making food today.\nWhat should I make? Uhh...");
    Character_Chara_GS2(15, "S2_01F", 0);
    Music_PlayBGM(0, "MN_C_15_000_D00", 127, 40);
    Voice_PlayVoice("H9C15000_O00000", #1, "");
    Message_Who(15);
    Message_MsgDisp("Hanatsubaki", "Hello! Well...\nIt's Daisy's turn to cook today,\nisn't it?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Himeko-senpai!?\nYou're also attending camp?");
    Voice_PlayVoice("H9C15000_O00100", #1, "");
    Message_Who(15);
    Message_MsgDisp("Hanatsubaki", "Yes.\nMy \"Club Camellia\" also has a Summer\ncamp.");
    Character_Chara_GS2(15, "NON");
    Character_Chara_GS2(15, "S2_18F", 0);
    Voice_PlayVoice("H9C15000_O00200", #1, "");
    Message_Who(15);
    Message_MsgDisp("Hanatsubaki", "It's an extremely intense camp, so\nthat we can become genuine maidens.\nRight, you are busy with food\npreparations.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, that's right...");
    Character_Chara_GS2(15, "NON");
    Character_Chara_GS2(15, "S2_01F", 0);
    Voice_PlayVoice("H9C15000_O00300", #1, "");
    Message_Who(15);
    Message_MsgDisp("Hanatsubaki", "So, what are we having today?");
    if (Parameter_GetSysParam(0) == 1){
        Message_MsgSel("Microwave curry.", "｛主人公姓名｝'s special curry.", "Pu pat pong curry.");
        switch (Message_TextSelect()){
            case 0:
            var0 = 0;
            break ;
            case 1:
            var0 = 3;
            break ;
            case 2:
            var0 = 6;
            break ;
            }
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_MsgSel("Canned yakitori.", "Special chicken and egg on rice.", "Stuffed chicken wing tips.");
        switch (Message_TextSelect()){
            case 0:
            var0 = 1;
            break ;
            case 1:
            var0 = 4;
            break ;
            case 2:
            var0 = 7;
            break ;
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_MsgSel("Microwave gyuudon.", "｛主人公姓名｝'s special stir fry.", "Ossobuco.");
        switch (Message_TextSelect()){
            case 0:
            var0 = 2;
            break ;
            case 1:
            var0 = 5;
            break ;
            case 2:
            var0 = 8;
            break ;
            }
        }
    if (var0 <= 2){
        if (Parameter_GetSysParam(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "We're having microwave curry today.");
            }
        else if (Parameter_GetSysParam(0) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Canned yakitori...");
            }
        else if (Parameter_GetSysParam(0) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Pre-made gyuudon...");
            }
        Voice_PlayVoice("H9C15000_O00400", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "It's quick, simple, and doesn't\nrequire effort, right?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_01F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_18F", 0);
        Voice_PlayVoice("H9C15000_O00500", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Daisy... you are a 10% maiden.\nNo matter the taste, you cannot cut\ncorners.\nYou will not become a maiden at this\nrate!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(15, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(...\nI should have made proper food...)");
        }
    else if (var0 <= 5){
        if (Parameter_GetSysParam(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.\nI plan to make\n｛主人公姓名｝'s special\ncurry.");
            }
        else if (Parameter_GetSysParam(0) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.\nI will make special chicken and egg\non rice!");
            }
        else if (Parameter_GetSysParam(0) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.\nI will make ｛主人公姓名｝'s\nspecial Chinese stir fry!");
            }
        Voice_PlayVoice("H9C15000_O00600", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "It sounds delicious.\nI will wait with anticipation.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_01F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            Character_Chara_GS2(15, "NON");
            Character_Chara_GS2(15, "S2_19F", 0);
            Voice_PlayVoice("H9C15000_O00700", #1, "");
            Message_Who(15);
            Message_MsgDisp("Hanatsubaki", "Amazing!\nYour taste is spreading in Himeko's\nmouth....\nIt's a miracle!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(15, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh. She ate it all!)");
            }
        else {
            Character_Chara_GS2(15, "NON");
            Character_Chara_GS2(15, "S2_18F", 0);
            Voice_PlayVoice("H9C15000_O00800", #1, "");
            Message_Who(15);
            Message_MsgDisp("Hanatsubaki", "Will you please pass me some water?\nYes... two liters of water.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(15, "NON");
            Voice_PlayVoice("H9C15000_O00900", #1, "");
            Message_Who(15);
            Message_MsgDisp("Hanatsubaki", "*Gulp* *Gulp*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(So it wasn't yummy...)");
            }
        }
    else {
        if (Parameter_GetSysParam(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I will take on pu pat pong\ncurry!");
            }
        else if (Parameter_GetSysParam(0) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I will take on stuffed chicken\nwing tips!");
            }
        else if (Parameter_GetSysParam(0) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I will take on Ossobuco!");
            }
        Voice_PlayVoice("H9C15000_O01000", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "It seems difficult to make.\nI will wait with anticipation▼");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_01F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            Character_Chara_GS2(15, "NON");
            Character_Chara_GS2(15, "S2_19F", 0);
            Voice_PlayVoice("H9C15000_O01100", #1, "");
            Message_Who(15);
            Message_MsgDisp("Hanatsubaki", "Bravo! Daisy!\nThe harmony between the spices and\nthe ingredients is somehow very\nwonderful!");
            Voice_PlayVoice("H9C15000_O01200", #1, "");
            Message_Who(15);
            Message_MsgDisp("Hanatsubaki", "Maybe I should get seconds▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best cooking!)");
            }
        else {
            Character_Chara_GS2(15, "NON");
            Character_Chara_GS2(15, "S2_18F", 0);
            Voice_PlayVoice("H9C15000_O01300", #1, "");
            Message_Who(15);
            Message_MsgDisp("Hanatsubaki", "... Thanks for the food.\nHimeko has to leave. Ciao.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(15, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(So it wasn't nice...)");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
