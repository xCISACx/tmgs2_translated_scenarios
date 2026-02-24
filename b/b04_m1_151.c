section "b04_m1_151"{
    int var0 = Date_GetDateOption(2, 43);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401151_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's been quite a long time since I\nwent bowling.");
        Message_MsgSel("I'd like for you to teach me how to bowl.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401151_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I won't. Just watch and learn!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401151_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It seems like you have no idea who\nyou're challenging...\nLet's go!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401151_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...\nI'm not going to fall for that\ntrick.\nLet's go!");
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
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401151_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Strike! ...\nIt looks like I've already won with\nthis last strike.");
        Message_MsgSel("You're good at everything.", "Go easy on me. I'm a girl.", "I'll aim for a strike too, then!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401151_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Aren't I?\nYou can praise me some more.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0401151_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No way.\nI don't show mercy, not even to\ngirls.\nThat's my style...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401151_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What did you say!?\nThen I'll aim for a double strike!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401151_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ack, it's Cincinnati...");
        Message_MsgSel("A g-gentleman split...?", "Well, go for certainty and aim for one pin.", "Alright! This match is mine!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401151_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm talking about a split.\nA 7-10 split is also called Snake\nEyes.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401151_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No matter how hard it is, it's\nimpossible to run away.\nThat's my style...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401151_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Shut up.\nBe quiet when people are going to\nbowl.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401151_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Hah!\nOi, saying weird things before\npeople are about to bowl is banned,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I didn't make such a promise!");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401151_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, from now on, it's banned.\nIf you don't abide, I'll give you a\nchop.");
                SoundEffect_PlayStream(3, "SS_T_00_147_M00");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll play the staredown game with\nhim and make him laugh then!)");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401151_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "What is it? Don't look at me.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401151_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Seduction is also banned.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(.... Seduction?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
