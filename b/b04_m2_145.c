section "b04_m2_145"{
    int var0 = Date_GetDateOption(2, 40);
    Background_Bg_GS2("BG_NE260_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best.", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402145_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see.\nIt's fine, as long as you could\nenjoy yourself.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402145_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right. The ballads were good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402145_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Was it that bad? You're harsh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402145_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Guys wearing make-up are...");
        Message_MsgSel("This is normal!", "What if you tried, ｛Shiba＊＊｝?", "The only do it for when they're on stage.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402145_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Only in this kind of world, right?\nBut they certainly do look good on\nstage.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402145_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", ".........\nIf my eyes looked better with it\non...\nNo, it's nothing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402145_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I know that.\nDon't say it as if you know\neverything.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402145_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Somehow, these guys...\nIf I didn't know better, I'd confuse\ntheir looks and voices with women...");
        Message_MsgSel("That's what's so appealing～ Kyaa▼", "It's kind of disgusting... Yuck.", "Your manliness is amazing▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402145_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Haha... Amazing...\nWell, I guess that's why they\ntransform themselves with make-up.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402145_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Oi.\nIf you wanted to say such things,\nthink of the time and place first.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402145_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Huh?\nRefrain from suddenly saying dumb\nthings.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402145_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Huh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Those neutral people are amazing,\nbut I just think that your manliness\nis cool, ｛Shiba＊＊｝.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0402145_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Hah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0402145_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No... How should I put it...\nYou're quite bold.");
                Message_Who(0);
                Message_MsgDisp("主人公", "R-Really...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402145_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Even the things you talk about are\nout of place.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hehe... Maybe.");
                Voice_PlayVoice("B0402145_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Haha... What a strange one.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝ is\nsmiling...)");
                }
            break ;
            }
        }
    }
