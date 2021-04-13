import streamlit as st

st.title('Simple Streamlit App')

st.text('Type a number in the box below')

# n = st.number_input('Number', step=1)
# st.write(f'{n} + 1 = {n+1}')

s = st.text_input('Type a name in the box below')


import os

def file_selector(folder_path='.'):
    filenames = os.listdir(folder_path)
    selected_filename = st.selectbox('Select a file', filenames)
    return os.path.join(folder_path, selected_filename)

filename = file_selector()
st.write('You selected `%s`' % filename)

st.write(f'Hello {s}')