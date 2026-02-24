section "b04_m1_110"{
    int var0 = Date_GetDateOption(2, 31);
    Character_Chara_GS2(1, "M1_09F", 0);
    Background_Bg_GS2("BG_FP610_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_610_000", 127, 40);
    System_Call_GS2("B02", "M1", 10);
    if (var0 == 0){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0401110_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Are you good at swimming?");
        Message_MsgSel("If it's swimming, leave it to me!", "I'm alright at it.", "I would like you to teach me how to swim.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 11);
                Message_PauseSkinship();
                Voice_PlayVoice("B0401110_A00100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Even though you said \"leave it to\nme\", you've got a nice form.\nIt surprised me.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401110_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Alright.\nI'll leave the poolside cleaning to\nyou.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401110_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "So that's how it is.\nSo that means that generally, you\ncan swim.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0401110_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I will next time, when we're at the\nbeach.\nYou'll remember it better when\nthere's a sense of nervousness.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0401110_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Even though I'll come here...\nI actually don't really like pools.");
        Message_MsgSel("Is it because you're a hopeless swimmer?", "You prefer the beach?", "Because it wrecks your hairstyle, right?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_BlinkStart(1, 0, (#1), 1);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401110_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Who are you talking to...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_BlinkStart(1, 0, (#1), 2);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401110_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It can't be helped, even if you\ncompare them.\nI don't like the smell of\nchlorine...\nIt hurts my eyes.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401110_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm not really bothered about\nsomething like that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("B0401110_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When the water is warm, it kinda\nfeels like a bath.");
        Message_MsgSel("So we can also swim here in winter.", "The warm water feels good.", "Then I'll act as if it were a bath!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401110_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You know you can also swim at the\nbeach in winter?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_09F", 0, 1);
            Voice_PlayVoice("B0401110_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Really?\nWell, it's a matter of taste.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401110_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You kinda look like an old person\ngoing to the gym...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401110_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Right.\nIf we came here with the intention\nof pretending it were a hot\nspring...");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401110_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No, it seems like a better idea to\nnot act out our intentions...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
