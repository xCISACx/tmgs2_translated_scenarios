section "b04_m5_143"{
    int var0 = Date_GetDateOption(2, 38);
    Background_Bg_GS2("BG_NE240_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405143_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "All the songs sounded the same to\nme...\nMaybe I'm not suited to this kinda\nmusic.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405143_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, I felt better knowing there\nwere a few songs that I've heard\nbefore.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405143_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI wonder why they play so loudly.\nMy hearing is still off... Ahh. Ahh.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405143_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Don't you think they made lots of\nhowling noises?");
        Message_MsgSel("The girls in front of us were into it.", "I also wanted more \"bam bam bam boom\".", "What are you talking about?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405143_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The girls who were dancing to the\nrhythm, right?\nThem showing off their belly-buttons\nwas cute▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405143_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt might have been better to have\nmore \"ta ta ta\" as well.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405143_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It didn't sound like that to you?\nOww...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405143_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The talk session they did half way\nthrough the show was the most\ninteresting.");
        Message_MsgSel("They're different to when they sing!", "They were talking about takoyaki!", "The knee area of their jeans were ripped.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405143_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm, well that's true...\nBut don't say it so loudly...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405143_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They have a grim feel to them when\nthey're playing music, but they were\nlively during the talk.");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's a little like you,\n｛Chris＊＊｝.");
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405143_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh? How so?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Normally, you're lively and you kind\nof confuse everyone,");
                Message_Who(0);
                Message_MsgDisp("主人公", "but when you're painting, aren't you\nreally serious?\nThat's what I mean.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405143_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405143_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nAs I thought, you see some things\nabout me differently than other\npeople...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you mean that in a good way?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405143_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nYou don't really get startled by me,\nso I'll give you a big hug.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405143_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Maybe next time I'll hug you so\ntight that you won't be able to\nbreathe.\nCan I do that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh... umm...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405143_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Haha, I'm joking.\nSeeing you all panicky is also cute▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder why ｛Chris＊＊｝\nlooks so happy...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405143_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right. I really wanna eat it now...\nDo you wanna go get some on the way\nhome?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405143_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, really? I didn't notice that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
