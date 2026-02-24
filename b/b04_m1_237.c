section "b04_m1_237"{
    if (Date_ChkDateOpen(75) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401235_A01500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I wonder if motorbikes are more\ncomplex than four-wheeled vehicles?");
        Message_MsgSel("That's where the thrill is.", "Like with bicycles and tricycles?", "It has the feeling of a sport, right?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right.\nThe wind is directly blowing against\nyou.\nWhen I have the time, maybe I'll get\na motorbike license...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401235_A01700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "\"Tricycles\", you say...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A01800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, I feel like they use their\nentire bodies to drive.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (Date_ChkDateOpen(74) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401235_A01900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Cool. As expected of pro racers...\nHey, should I become a racer, too?");
        Message_MsgSel("It seems like you could become one!", "Say that after you beat me.", "Stick a Sangosho sticker on your car!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A02000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe. It was just a joke though.");
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
            Character_ChFace(1, 0, 8);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A02100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What did you say!?\nI won't ever let anyone be ahead of\nme in a race.");
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
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A02200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Haha! That's a good idea!\nTeam Sangosho!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (Date_ChkDateOpen(76) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401235_A02300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "As expected, you become a different\nperson when you're a champion...\nEven the motorbikes are different.");
        Message_MsgSel("Don't blame the motorbike!", "The sound is completely different!", "We must steal their techniques.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A02400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah!! Those words have woke me up...\nSo let's come back again and\npractice, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A02500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, you say that like you know what\nyou're talking about.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A02600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, right... Alright!\nLet's go to the S-shaped course!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(1, 61, 3);
        Parameter_AddCh1Param(1, 60, 2);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(1, 61, 0);
        Parameter_AddCh1Param(1, 60, #1);
        Parameter_AddCh1Param(1, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #2);
        Parameter_AddCh1Param(1, 62, 2);
        }
    }
