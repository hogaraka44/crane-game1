enum State
{
    touch1,
    touch2,
    auto,
    back, // 全画面隠れた状態
    reset, 
}



void setup() {
  int state = State.reset;
  //ここでモーター1,2,3,4を制御して定位置にリセット
}

void loop() {
  // put your main code here, to run repeatedly:
  if(state == State.reset){
    //コインを入れるなどの条件を付けるならここで
   state = State.touch1;
  }

  if(state == State.touch1){
  /*if() //操作ボタン1をおして
  {
    
  }
  /*
    
  //state = State.auto;
  }
}


/*

// 毎フレームの処理
private void Update() {
    if(m_state != m_stockState){
        OnChangeState(m_state);
    }
    ~~ 各TitleStateでのフレーム毎処理

}

public void SetTitleState(TitleState s){
    m_state = s;
}

private void OnChangeState(TitleState s){
    ~~ 各TitleStateでの初期化処理

    m_stockState = s;
}

*/