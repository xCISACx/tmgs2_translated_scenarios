section "u03_g1_000"{
    if (Parameter_GetCh1Param(10, 64) == 0){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("", #1, "U0310000_J00000");
        Message_Who(10);
        Message_MsgDisp("Toudou", "｛主人公｝, here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? What is it?");
        Voice_PlayVoice("U0310000_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "It's a set of movie postcards that\nI've collected.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("U0310000_J00200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "It's a way of saying thanks...\nIt's a gift for accompanying me...\nIt isn't much, though.\nWill you accept it?");
        Message_MsgSel("Accept Set of Movie Postcards.", "Do not accept Set of Movie Postcards.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Woah～. They're nice!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("U0310000_J00300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You can easily use them whenever you\nwish to change your room's\natmosphere.");
            SoundEffect_PlayStream(3, "SS_T_00_160_M00");
            Message_Who(0);
            Message_MsgDisp("　　　", "(Received \"Monotone Postcards\"!)");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_DSE_191_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel my senses sharpening a\nbit...)");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("U0310000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Well then, let's head home.\nI'm sorry for making you tag along\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I had fun.\nInvite me again, okay?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(10, 2, (#1));
            Voice_PlayVoice("U0310000_J00500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Yeah. See you then.");
            Parameter_AddPl1Param(19, 5);
            Parameter_AddPl1Param(20, 5);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "You really do treasure this, don't\nyou, ｛Toudou＊＊｝?\nI feel bad, but I'll take it.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("U0310000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "That's a bit of an exaggeration...");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(10, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("U0310000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Oh, it would be bad if I bothered\nyou.\nSo, I'll wait, if you wish to invite\nme.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay. Thank you.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("U0310000_J00800", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "So, let's head home.\nI'm sorry for making you tag along\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I had fun.\nInvite me again, okay?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(10, 2, (#1));
            Voice_PlayVoice("U0310000_J00900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Yeah. See you then.");
            Parameter_AddCh1Param(10, 60, #3);
            break ;
            }
        }
    else {
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("", #1, "U0310000_J01000");
        Message_Who(10);
        Message_MsgDisp("Toudou", "｛主人公｝, here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? A pouch?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(10, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("U0310000_J01100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "No, it isn't.\nInside holds a cloth for your lap to\nkeep you warm and a handkerchief.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_BlinkStart(10, 0, (#1));
        Voice_PlayVoice("U0310000_J01200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Since it's small, bringing it along\nwith you is handy, too.\nTry it.");
        Message_MsgSel("Accept Movie-goer Necessities Set.", "Do not accept Movie- goer Necessities Set.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("U0310000_J01300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Even during Summer, sometimes it's\ncold inside the movie theater.\nPlease do use it.");
            SoundEffect_PlayStream(3, "SS_T_00_160_M00");
            Message_Who(0);
            Message_MsgDisp("　　　", "(Received \"Movie-goer Necessities\nSet\"!)");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_DSE_191_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Somehow, I feel a flow of power...)");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("U0310000_J01400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Well then, let's head home.\nI'm sorry for making you tag along\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I had fun.\nInvite me again, okay?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(10, 2, (#1));
            Voice_PlayVoice("U0310000_J01500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Yeah. See you then.");
            Parameter_AddPl1Param(19, 10);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "You did treasure using this, didn't\nyou, ｛Toudou＊＊｝?\nI feel bad, but I'll take it.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("U0310000_J01600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "It's not a big deal, anyway.\nWell, we have our own likes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry. But, thank you.");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("U0310000_J01700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "So, let's head home.\nI'm sorry for making you tag along\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I had fun.\nInvite me again, okay?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(10, 2, (#1));
            Voice_PlayVoice("U0310000_J01800", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Yeah, see you then.");
            Parameter_AddCh1Param(10, 60, #3);
            break ;
            }
        }
    if (Parameter_ChkPlayer(5)){
        System_Call_GS2("K02", "G1", 11);
        }
    Parameter_AddCh1Param(10, 64, 1);
    Parameter_AddCh1Param(10, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
