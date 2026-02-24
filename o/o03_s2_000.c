section "o03_s2_000"{
    int var0 = 0;
    Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_Chara_GS2(15, "S2_19F", 0);
        Voice_PlayVoice("O0315000_O00000", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Victory for the Maiden!\n*Giggle* First prize, Daisy!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it! First prize!)");
        }
    else if (var0 == 2){
        Character_Chara_GS2(15, "S2_17F", 0);
        Voice_PlayVoice("O0315000_O00100", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "*Squeak* Himeko does not accept 2nd\nplace!\nThe judge! Where's the judge?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm... How disappointing...\nI should have tried just a little\nmore.)");
        }
    else if (var0 == 3){
        Character_Chara_GS2(15, "S2_17F", 0);
        Voice_PlayVoice("O0315000_O00200", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "There is no way anyone else wanted\nthis more than me!\nRight, Daisy?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well..\nMaybe we don't work well\ntogether...)");
        }
    else {
        Character_Chara_GS2(15, "S2_17F", 0);
        Voice_PlayVoice("O0315000_O00300", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "You're a fool, Daisy! You turtle!\nYou will be known as \"Turtle\" from\nnow on!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I'm so ashamed...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
