section "b04_m2_075"{
    int var0 = Date_GetDateOption(2, 22);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402075_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's gotten cooler.\nThe color of the leaves have also\nchanged quite a lot.");
        Message_MsgSel("The falling leaves are romantic.", "As expected, fall is about sports!", "My appetite grows in fall, as expected.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402075_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's fine being romantic, but don't\nspace out and fall over.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402075_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nShould we go for a run next time?\nIt'd surely feel good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(2, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402075_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What a plain one....\nBut I'm actually a little hungry.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402075_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "When it's Winter, there'll be fewer\npeople, right?");
        Message_MsgSel("The park in Winter is still elegant.", "I don't want to leave my kotatsu in Winter.", "So let's take a long walk while we can!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402075_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right, it's nice when it's quiet.\nYou'd probably only be able to hear\nthe sound of the wind, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("B0402075_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "If you keep eating mandarins and\nice- cream, you'll get fat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402075_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIs there any meaning in doing that?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(2, 2, (#1));
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402075_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ah...\nA small red dragonfly landed on your\nhair.");
        Message_MsgSel("Eww, get it off, ｛Shiba＊＊｝!", "Wow, I want to see! Where is it?", "Ehehe, it's a hair ornament▼");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 2);
                Date_InData_Date(321, 2);
                Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(2, 0, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0402075_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's not like it's gonna bite you.\nLeave it until it flies off.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402075_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's not like it's gonna eat you, so\ndon't make so much noise.\nAre you scared of bugs?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ughh...\nSeriously, ｛Shiba＊＊｝,\nget it off～!");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402075_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Pfft, it can't be helped then.");
                Voice_PlayVoice("B0402075_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Look.");
                Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402075_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's already flying off.");
                Message_Who(0);
                Message_MsgDisp("主人公", "T-Thanks.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402075_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nEven if dragonflies are scary,\nI'm...\nnot scared....\nEven though it might bite you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402075_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... No, don't worry about it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's with\n｛Shiba＊＊｝...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402075_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You can't, it's near the back of\nyour head.\nOh, and you're fine with bugs.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0402075_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No, it's a dragonfly....\nAnd you chuckled about it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
