section "b04_m5_142"{
    int var0 = Date_GetDateOption(2, 37);
    Background_Bg_GS2("BG_NE230_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That comedy show was the best!", "That comedy show was so-so.", "That comedy show was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405142_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, I laughed a lot.\nI laughed so much by body hurts～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405142_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Such harsh judgement.\nBut their jokes may have been\naverage.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0405142_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehhhhh!? Are you serious...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405142_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "*Sigh*...\nI'm tired from all the laughing...");
        Message_MsgSel("Let's rest a bit.", "It was good for relieving stress.", "I laughed so much I cried...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405142_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nAh, I'll go buy something to drink.\nWhat do you wanna drink?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405142_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're so composed...\nI wonder what makes you laugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405142_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I don't know what to do when a girl\ncries, but if you're crying from the\nlaughter, then it's fine.\nHere, take my hanky▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405142_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Being a comedian is also a nice\nidea...");
        Message_MsgSel("... A comedic duo with a foreigner...", "Making people laugh is an amazing thing.", "You're way too naive!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405142_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Is that bad?\nMy reading and writing is still\nlacking, but I can at least speak\nwell, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405142_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... A duo?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405142_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Me... and you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Of course. Why do you ask?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405142_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Being tied together... with...\nthose eyes...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hm?");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405142_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I-It's nothing～. Right.\nWe have to think up of a name for\nour duo.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405142_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hahaha...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder why is\n｛Chris＊＊｝ so flustered?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405142_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nBeing able to stir up peoples'\nemotions is an amazing thing.");
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
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405142_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nSaying it like it were an easy thing\nto do is rude to the comedians.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
