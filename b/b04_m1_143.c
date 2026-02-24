section "b04_m1_143"{
    int var0 = Date_GetDateOption(2, 38);
    Background_Bg_GS2("BG_NE240_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401143_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Even your eardrums are strong.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401143_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I dunno.\nWhy was the volume that loud...?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401143_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I don't know if it was disappointing\nor not, but it was just noisy....\nI'm tired.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401143_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, how noisy...\nI kinda feel like they're trying to\ndeceive us with the volume.");
        Message_MsgSel("You hate noise, don't you?", "But you were also into it?", "The volume was just fine!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401143_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I hate it.\nI hate crowded places, too.");
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
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401143_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "How so...? I'm tired.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401143_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah... What was that?\nSo there are people who are fine\nwith it, too.");
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
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401143_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Argh, how noisy. But it was kinda...");
        Message_MsgSel("I loved it, too!", "Yay!!", "It was quite good, wasn't it?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401143_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see... Yeah.\nWell, it's not like I don't get\nwhere you're coming from.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401143_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You were the noisiest.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401143_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Do you like this stuff that much?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Because it's fun!");
                Voice_PlayVoice("B0401143_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Right.\nIn terms of music, it was delicate.\nEven though it was noisy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Were you okay with it being crowded?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401143_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, that's...");
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401143_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I can probably handle it if you're\nnext to me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401143_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nI might be able to get used to it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
