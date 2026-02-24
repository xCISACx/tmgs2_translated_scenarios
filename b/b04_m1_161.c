section "b04_m1_161"{
    int var0 = Date_GetDateOption(2, 45);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401161_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I haven't been here since my second\nyear in middle school...\nWhat do you wanna do?");
        Message_MsgSel("Let's check our compatibility!", "There's a stuffed toy that I want.", "As expected, fighting games!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401161_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Why?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401161_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, I'll try getting one.\nI wanted to try doing it once.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401161_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, that's my forte!\nIt's been a while...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401161_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The latest racing games are quite\nrealistic...");
        Message_MsgSel("It's like you're really driving.", "The mapping is still lacking.", "Talk is cheap, try and beat me instead.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401161_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIt feels like we'll be able to get\nour license if we play this, doesn't\nit?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0401161_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Really...\nI mean what do you mean by that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401161_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "How interesting...\nI'll take on your challenge!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401161_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "With these shooting games, I'm kinda\nonly hitting the middle of the\nscreen...");
        Message_MsgSel("I have no idea what an item is.", "It's impossible for you!", "Ah, it got away!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401161_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, it's like we're just shooting\nall over the place.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401161_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Then show me how to do it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401161_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "What the? I can do it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401161_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Usually, I can.... All three sides.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He really hates losing...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0401161_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Who did? ... Watch me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
