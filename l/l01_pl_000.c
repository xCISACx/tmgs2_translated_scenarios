section "l01_pl_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    if (Parameter_ChkSpEvent("D01", "G3", 0) == 1){
        System_Call_GS2("D01", "G3", 0);
        }
    var0 = Parameter_GetPl1Param(23);
    int var5 = Parameter_Get_Afterscholl();
    if (var5 != 2){
        Background_Bg_GS2("BG_SC100_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        }
    else {
        Background_Bg_GS2("BG_NE000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        }
    if (Parameter_GetPl1Param(23) >= 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Now, I should go home.... Ah!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right, even though it's Valentine's\nDay soon, I haven't bought\nchocolate!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright, I'll go and buy some.");
        var1 = 0;
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Now, I should go home.... Ah!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right, even though it's Valentine's\nDay soon, I haven't bought\nchocolate...");
        Message_Who(0);
        Message_MsgDisp("主人公", "I want to buy chocolate, but I have\nno money...\nI won't buy any this time...");
        var1 = 1;
        }
    switch (var1){
        case 1:
        break ;
        case 0:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Background_Bg_GS2("BG_EX130_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("L0100000_W00000", #1, "");
        Message_Who(0);
        Message_MsgDisp("Clerk", "Welcome!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So, what should I do?)");
        Message_MsgSel("High quality chocolate 	 10 Rich", "Standard chocolate 		 1 Rich", "Just go home.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(23) >= 10){
                Message_Who(0);
                Message_MsgDisp("主人公", "(I bought high quality chocolate.)");
                var2 = 1;
                Parameter_AddPl1Param(23, #10);
                Parameter_InPl1Param(37, 1);
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah...\nI can't buy it since I don't have\nenough money on me...");
                }
            Message_MsgSel("Standard chocolate 		 1 Rich", "I should go home.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetPl1Param(23) >= 1){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I bought standard chocolate.)");
                    var2 = 1;
                    Parameter_AddPl1Param(23, #1);
                    Parameter_InPl1Param(36, 1);
                    }
                else {
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah...\nI can't buy it since I don't have\nenough money on me...");
                    }
                switch (var2){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hmm, it's fine.\nI'll just go home without buying\nanything.");
                    break ;
                    case 1:
                    Voice_PlayVoice("L0100000_W00100", #1, "");
                    Message_Who(0);
                    Message_MsgDisp("Clerk", "Thank you very much～!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've bought nice things.\nI should go home.");
                    break ;
                    }
                break ;
                case 1:
                switch (var2){
                    case 0:
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hmm, it's fine.\nI'll just go home without buying\nanything.");
                    break ;
                    case 1:
                    Voice_PlayVoice("L0100000_W00200", #1, "");
                    Message_Who(0);
                    Message_MsgDisp("Clerk", "Thank you very much～!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've bought nice things.\nI should go home.");
                    break ;
                    }
                break ;
                }
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(I bought standard chocolate.)");
            var2 = 1;
            Parameter_AddPl1Param(23, #1);
            Parameter_InPl1Param(36, 1);
            Message_MsgSel("High quality chocolate 	 10 Rich", "I should go home.");
            switch (Message_TextSelect()){
                case 0:
                if (Parameter_GetPl1Param(23) >= 10){
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I bought high quality chocolate.)");
                    Voice_PlayVoice("L0100000_W00300", #1, "");
                    Message_Who(0);
                    Message_MsgDisp("Clerk", "Thank you very much～!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I've bought nice things.\nI should go home.");
                    var2 = 1;
                    Parameter_AddPl1Param(23, #10);
                    Parameter_InPl1Param(37, 1);
                    }
                else {
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah...\nI can't buy it since I don't have\nenough money on me...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hmm, it's fine.\nI'll just go home without buying\nanything.");
                    }
                break ;
                case 1:
                Voice_PlayVoice("L0100000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Clerk", "Thank you very much～!");
                Message_Who(0);
                Message_MsgDisp("主人公", "I've bought nice things.\nI should go home.");
                break ;
                }
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm, it's fine.\nI'll just go home without buying\nanything.");
            break ;
            }
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    int var6 = Parameter_GetPl1Param(12);
    switch (var6){
        case 0:
        Background_Bg_GS2("BG_HO200_CO_2", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_CO_2", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_CO_2", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_CO_2", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ah, right.\nWhat about homemade chocolate?)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Yuu-kun also said that he would\nhelp out...)");
    Message_MsgSel("Make homemade chocolate.", "Don't make homemade chocolate.");
    switch (Message_TextSelect()){
        case 0:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Background_Bg_GS2("BG_HO300_CO_2", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I want to give homemade chocolate\nto the person I like.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So I will go at it\nenthusiastically!)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Run_Minigame(3);
        var4 = Run_Minigame_Result();
        Background_Bg_GS2("BG_HO300_CO_2", #1, #1, 0);
        Screen_WipeIn(3);
        if (var4 >= 4){
            var4 = var4 - 1;
            }
        else if (var4 <= 1){
            var4 = var4 + 1;
            }
        if (var4 == 5){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've made it well!\nI look forward to giving it to him\ntomorrow.");
            Parameter_InPl1Param(39, 1);
            }
        else if (var4 == 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've made it well!\nI look forward to giving it to him\ntomorrow.");
            Parameter_InPl1Param(39, 1);
            }
        else if (var4 == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it's quite good.\nI look forward to giving it to him\ntomorrow.");
            Parameter_InPl1Param(39, 2);
            }
        else if (var4 == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm, this chocolate is a bit\nstrange...\nBut it should be fine.");
            Parameter_InPl1Param(39, 3);
            }
        else if (var4 == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm, this chocolate is a bit\nstrange...\nBut it should be fine.");
            Parameter_InPl1Param(39, 3);
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "It can't be helped.\nThere are no more ingredients left.\nI'll bring the one I made earlier.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for helping me out, Yuu-kun.\nI'll see you later.");
            }
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm, whatever. I won't make it.");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
