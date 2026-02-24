section "b04_m1_142"{
    int var0 = Date_GetDateOption(2, 37);
    Background_Bg_GS2("BG_NE230_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
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
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401142_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That was? I doubt your tastes...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401142_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nTheir jokes were on the right track.");
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
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401142_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Their jokes were good.\nBut their movements need work.\nIt's all about their skill.");
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
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401142_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Well, that's just how it is.");
        Message_MsgSel("But I laughed quite a bit.", "Maybe they're not feeling well today?", "That straight-laced man was awesome!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0401142_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I didn't.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401142_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "How naive.\nThose things have no bearing when\nyou're in front of an audience.");
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
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401142_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, him! ... No, he was average.");
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
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401142_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... I-It's not like it wasn't funny.");
        Message_MsgSel("You laughed so much, ｛Saeki＊＊｝!", "I can't take any more! My stomach hurts!", "It wasn't funny, it wasn't.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0401142_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... I didn't laugh that much.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401142_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "W-Well...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401142_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Are your forcing yourself?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0401142_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Hah! That's enough! Just laugh!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? Thank gosh! Ahaha!");
                Voice_PlayVoice("B0401142_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's because you were making an\nawful face while trying to hold your\nlaughter in.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez, that's rude!");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401142_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Sorry. But...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hm?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401142_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey? Let's stop forcing ourselves.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401142_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Hah!\nAnyway, that straight-laced man was\nso funny!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝ looks happy!)");
                }
            break ;
            }
        }
    }
